#include <stdio.h>

int subset(int a[], int tag[], int n, int len) {
	if (n == len) {
		printf("--> ");
		for (int i = 0; i < len; i++) {
			if (tag[i] == 1) {
				printf("%d ", a[i]);
			}
		}
		printf("\n");
		return 1;
	}
	
	tag[n] = 1;
	subset(a, tag, n + 1, len);
	
	tag[n] = 0;
	subset(a, tag, n + 1, len);
}

int main() {
	int m, j;
	scanf("%d", &m);
	for (j = 0; j < m; j++) {
		int k;
		scanf("%d", &k);
		
		int element;
		int a[k];
		for (int i = 0; i < k; i++) {
			scanf("%d", &element);
			a[i] = element;
		}
		
		int len = k;
		int n = 0;
		int tag[k];
		subset(a, tag, n, len);
	}
	return 0;
}


