/*�ж��Ƿ�Ϊ����*/
/*ѭ����break��continue��goto*/
/*continue�����Ǹ�ɶ���⣿����*/
#include<stdio.h>
int main()
{
/*	int d,n;
	scanf("%d",&n);
	for(d=2;d<n;d++)//����for(1;2;3)  ����1��������2����ʱ�����к�����������ִ��3���� 
	  if(n%d==0)
	   break;
     //breakֻ������һ��Ƕ����䣬���������ڲ��while/do/for/switch�����ת�Ƴ��� 
	 if(d<n)
	 printf("%d is divisoble by %d\n",n,d);
	 else
	 printf("%d is prime.\n",n);
	return 0;
*/  //������������ֻ��Ϊ�˱���ע�� 


/*int i,n,sum;
    n=0; sum=0;
	while(n<10){
		scanf("%d",&i);
		if(i==0)
		 continue;
		sum+=1;
		n++;
	} 
	return 0; 
} */


//����Ϊ��֪����ϵ��




	int d,n;
	scanf("%d",&n);
	for(d=2;d<n;d++)//����for(1;2;3)  ����1��������2����ʱ�����к�����������ִ��3���� 
	  if(n%d==0)
	   goto done;
done:
	 if(d<n)
	 printf("%d is divisoble by %d\n",n,d);
	 else
	 printf("%d is prime.\n",n);
	return 0; 
}
