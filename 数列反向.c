/*���з��򣬺üһ����ڶ���*/ 
#include <stdio.h>
int main()
{
	int  a[10], i,sum;
	printf("Enter 10 numbers:");/*�˴����԰�Nֱ�Ӹĳ���10�����ú�N��������α�P115*/ 
	for (i = 0; i < 10; i++)
	 scanf("%d", &a[i]);/*%dָ�������ͣ�scanf������,���Զ������scanf���к�������*/ 
	 
   printf("In reverse order:");
   for (i = 0; i <= 10; i++)/*���ڵ��ڷ����м䲻Ҫ�ո�*/
   //�˴���д��<=10��������a[10]�Ĳ�����Ԫ�أ�����������ѭ�� 
   sum += a[i];//�ڴ˴����ϸ�sum��ֵ��ֱ��i=10ʱ�˳�ѭ�� 
   printf(" %d",a[i]);
   return 0;
}

