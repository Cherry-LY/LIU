#include<stdio.h>

int main()
{
    int a[501], b[501], c[501];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
	scanf("%d %d %d", &a[i], &b[i], &c[i]);
   if (a[i] != '0' && b[i] != '0' && c[i] != '0' ){ //去掉单引号从AC变成13.33分 
	int p, q, j, temp; 
	p = a[i];
	q = b[i];
	j = c[i]; 
//排序： p >= q >= j 
	if (p < q)
	{
		temp = p;
		p = q;
		q = temp;
	}
	if (p < j)
	{
		temp = p;
		p = j;
		j = temp;
	}

  if (p*p == q*q + j*j && p*q*j != 0)
	printf("Yes\n");
  else
    printf("No\n");
} 
	}
    return 0;
}

