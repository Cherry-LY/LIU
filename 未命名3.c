#include <stdio.h>
#include <string.h>

void compute(char *a, char *b, char *c);

int main() {
    char a[501], b[501], c[501 * 2];
	int n;
	scanf("%d", &n);
	int r;//��c�ļ����forѭ�������������ᱨ�� 
	for (r = 0; r < n; r++) {
		scanf("%s %s", a, b);
		if (a[0] == '0' || b[0] == '0') {
			printf("0");
		} else {
			compute(a, b, c);
		}
		printf("\n");
	}
	return 0;
} 

void compute(char *a, char *b, char *c)
{ 
	int i, j, p, q, t; 
	long sum, carry; 

	p = strlen(a) - 1;
	q = strlen(b) - 1;
	for (i = p; i >= 0; i--) {
		a[i] -= '0';
	}
	for (i = q; i >= 0; i--) {
		b[i] -= '0';
	}
	c[p + q + 2] = '\0';

    carry = 0; 
    for (i = p + q; i >= 0; i--) {
        sum = carry; 

        if ((j = i - p) < 0) {
            j = 0;
		}
        for ( ; j <= i && j <= q; j++) { 
			sum += a[i - j] * b[j]; 
		}
		
		c[i + 1] = sum % 10 + '0'; //������y 
		carry = sum / 10; 
    } 

	if ((c[0] = carry + '0') == '0') { 
    int k;//��c�ļ����forѭ�������������ᱨ�� 
		for ( k = 1; k < 501 * 2; k++) {
			if (c[k] - '0' < 0) 
			break;
			printf("%d", c[k] - '0');
		}
	}
	if ((c[0] = carry + '0') != '0') { 
	    int k;
		for (k = 0; k < 501 * 2; k++) {
			if (c[k] - '0' < 0) 
			break;
			printf("%d", c[k] - '0');
		}
	}
}
