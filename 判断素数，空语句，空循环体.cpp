/*�ж�n�Ƿ�Ϊ�����������*/
#include<stdio.h>
int main()

{

	int d,n;
	scanf("%d",&n);
	for(d=2;d<n && n%d!=0;d++)
	   ;  //����for(1;2;3)  ����1��������2����ʱ�����к�����������ִ��3���� 
//���for�����治�ӡ������������й����޷�������� 
//ע����á�������λ�ã�������һ�и����ױ���������ͬһ�л����׺���ͨfor������
	if(d<n)
	 printf("%d is divisible by %d\n",n,d);
	else
	 printf("%d is prime.\n",n);
	return 0;
}
 
