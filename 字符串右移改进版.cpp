#include<stdio.h>
#include<string.h>

int main() 
{
	int N, len;
	
	scanf("%d\n", &N);
	
	char a[200] = " ";
	char b[200] = " ";
	
	fgets(a, 201,stdin);
	len = strlen(a) - 1;

	for (int i = 0; i < N; i++) {
		b[i] = a[len + i - N];
	}
	
	for (int i = N, j = 0; j < len - N; i++,j++) {
		b[i] = a[j];
	}

	printf("%s", b);

	return 0;
}
