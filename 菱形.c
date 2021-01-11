#include <stdio.h>
void main()
{
	int i,j,k,n;
	printf("ÇëÊäÈëĞĞÊın£º\n");
	scanf("%d",&n);
	for(i=1;i<=n-((n-1)/2);i++)
	{
		for(j=1;j<=(n-(2*i-1))/2;j++)
			printf(" ");
		for(k=1;k<=2*i-1;k++)
			printf("*");
		printf("\n");
	}
	for(i=1;i<=n-((n+1)/2);i++)
	{
		for(j=1;j<=(n-((n-2)-((i-1)*2)))/2;j++)
			printf(" ");
		for(k=1;k<=((n-2)-((i-1)*2));k++)
			printf("*");
		printf("\n");
	}
}
