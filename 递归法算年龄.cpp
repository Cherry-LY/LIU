#include<stdio.h>

 int age(int n,int a,int k)
/*n,a,k�ֱ������������С������������һ��С�������� �����ڱ��С���������*/ 
{

	if (n==1)
	  return a;
	else
      return age(n-1,a,k) + k ;

}
int main()
{
	
 int n,a,k,years_old;
    
	/*printf("��ֱ���������������������һ��С�������䡢������С���������:\n");
	�˾䲻�������У����ǲ�������ĿҪ����Ŀ������ֻ������*/ 
	scanf("%d %d %d",&n,&a,&k); 
	
	if(n<=0||k>=100||a<=0||k<=0||n<2)
	  {printf("Wrong number");
	}
	else {
	  years_old = age(n,a,k);
	  printf("%d",years_old);
    }
    
	return 0;
}
