/*数列求和（改进版）*/
#include<stdio.h>
int main(void)
{
	long n,sum=0;  /*把int n，sum换成long */  
	printf("This program sums a series of integers\n");
	printf("Enter integers(0 to terminate):");
	
	scanf("%ld",&n);  /*从%d改为 %ld */ 
	while(n!=0){
		sum +=n;
	scanf("%ld",&n);  /*从%d改为 %ld,全文保持一致*/ 
	}
	printf("The sum is %ld\n",sum);
	
	return 0;
 } 
