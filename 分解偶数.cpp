#include <stdio.h>
#include <math.h>
int Prime(int m)
{
	int d;
	for(d=2;d<=m;d++)
	 if(m % d == 0) 
	   break; 
	   
	if(d<m)
	 return 0;
	else
	 return -1;
}
int main()
{
 	int n,i;
	 scanf("%d", &n);
	if (n % 2 == 0 && n >= 6) {
		  for (i = 2; i <= n/2; i++)
			   if (Prime(i) && Prime(n - i))
			  printf("%d %d\n", i, n - i);
	      }
	else
	  printf("ERROR");
	 return 0;
}
