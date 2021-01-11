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
	for (i=0;i<m;i++)//byp的代码是i=1，也对。为什么可以用i=1呢？？？ 
	{
		if(b[i]>q)
		{
			p = a[i];//把绝对值大的对应的b的元素的值赋给b[0] 
			q = b[i];//把绝对值大的对应的a的元素的值赋给a[0] 
		}
	} 
	printf("%d",p);
	return 0;
}
