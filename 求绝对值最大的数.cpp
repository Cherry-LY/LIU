#include<stdio.h>
#include<math.h>
int main()
{
	int m,i,p,q;
	scanf("%d",&m);

	int a[20],b[20];
	for (i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
		b[i]=abs(a[i]);
	}
	
	p = a[0];
	q = b[0];
	for (i=0;i<m;i++)//byp�Ĵ�����i=1��Ҳ�ԡ�Ϊʲô������i=1�أ����� 
	{
		if(b[i]>q)
		{
			p = a[i];//�Ѿ���ֵ��Ķ�Ӧ��b��Ԫ�ص�ֵ����b[0] 
			q = b[i];//�Ѿ���ֵ��Ķ�Ӧ��a��Ԫ�ص�ֵ����a[0] 
		}
	} 
	printf("%d",p);
	return 0;
}
