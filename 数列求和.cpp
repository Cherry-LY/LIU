/*������ͣ��Ľ��棩*/
#include<stdio.h>
int main(void)
{
	long n,sum=0;  /*��int n��sum����long */  
	printf("This program sums a series of integers\n");
	printf("Enter integers(0 to terminate):");
	
	scanf("%ld",&n);  /*��%d��Ϊ %ld */ 
	while(n!=0){
		sum +=n;
	scanf("%ld",&n);  /*��%d��Ϊ %ld,ȫ�ı���һ��*/ 
	}
	printf("The sum is %ld\n",sum);
	
	return 0;
 } 
