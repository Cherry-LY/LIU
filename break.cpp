#include<stdio.h>
int main()
{
	int n,d;
	scanf("%d",&n); 
	
	for(d=2;d<n;d++)
	   if (n%d==0)
	   break;/*����forѭ��*/
	n 
	if (d<n)
	  printf("%d is divisible by %d\n",n,d);
	else
	  printf("%d is prime\n",n);

    return 0;
}
