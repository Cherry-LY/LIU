#include <stdio.h>

int main() {
	int r, c;
	scanf("%d %d", &r, &c);
	int a[101][101] = {0};
	
	int m;
	int i = 0;
	for ( ; i < r; i++) {
	    int j=0;
		for ( ; j < c; j++) {
			scanf("%d", &m);
			a[i][j] = m;
		}
	}
	
	int n;
	scanf("%d", &n);
	for ( int i = 0 ; i < n + 1; i++) {
		char cmd[10];		
		fgets(cmd, sizeof(cmd), stdin);
		
		int p = 0;
		int q = 0;
		int t = 0;
		int j = 3;
		for (  ; j < 10; j++) {
			if (cmd[j]  == '\n') {
				break;
			}
			if (t == 0 && cmd[j] != ' ') {
				p = p * 10 + (cmd[j] - '0');
			}
			if (t == 1 && cmd[j] != ' ') {
				q = q * 10 + (cmd[j] - '0');
			}
			if (cmd[j] == ' ') {
				t = 1;
			}
		}
		p = p - 1;
		q = q - 1;
		
		if (cmd[0] == 'S' && cmd[1] == 'R') {
//			printf("1\n");
			int j = 0;
			for (  ; j < c; j++) {
				a[100][j] = a[p][j];
				a[p][j] = a[q][j];
				a[q][j] = a[100][j];
			}
		}
		
		if (cmd[0] == 'S' && cmd[1] == 'C') {
//			printf("2\n");
			int j = 0;
			for (  ; j < r; j++) {
				a[j][100] = a[j][p];
				a[j][p] = a[j][q];
				a[j][q] = a[j][100];  //Êý×é½»»» 
			}			
		}
		
		if (cmd[0] == 'D' && cmd[1] == 'R') {
//			printf("3\n");
			int j = p;
			for (  ; j < r; j++) {
				int k = 0;
				for (  ; k < c; k++) {
					a[j][k] = a[j + 1][k];
				}
			}
			int k = 0;
			for (  ; k < c; k++) {
				a[r][k] = 0;
			}
			r = r - 1;
		}
		
		if (cmd[0] == 'D' && cmd[1] == 'C') {
//			printf("4\n");
			int j = p;
			for (  ; j < c; j++) {
				int k = 0;
				for (  ; k < r; k++) {
					a[k][j] = a[k][j + 1];
				}
			}
			int k = 0;
			for (  ; k < r; k++) {
				a[k][c] = 0;
			}
			c = c - 1;
		}
		
		if (cmd[0] == 'I' && cmd[1] == 'R') {
//			printf("5\n");
			int j = r;
			for (  ; j >= p; j--) {
				int k = 0;
				for (  ; k < c; k++) {
					a[j][k] = a[j - 1][k];
				}
			}
			int k = 0;
			for (  ; k < c; k++) {
				a[p][k] = 0;
			}
			r = r + 1;
		}
		
		if (cmd[0] == 'I' && cmd[1] == 'C') {
//			printf("6\n");
			int j = c;
			for (  ; j >= p; j--) {
				int k = 0;
				for(  ; k < r; k++) {
					a[k][j] = a[k][j - 1];
				}
			}
			int k = 0;
			for (  ; k < c; k++) {
				a[k][p] = 0;
			}
			c = c + 1;
		}
	}

	for (int i = 0  ; i < r; i++) {
		int j = 0;
		for (  ; j < c; j++) {
			printf("%d ", a[i][j]);
			if (j == c - 1) printf("\n");
		}
	}
	
	return 0;
}
