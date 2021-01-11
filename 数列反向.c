/*数列反向，好家伙终于对了*/ 
#include <stdio.h>
int main()
{
	int  a[10], i,sum;
	printf("Enter 10 numbers:");/*此处尝试把N直接改成了10，若用宏N，代码见课本P115*/ 
	for (i = 0; i < 10; i++)
	 scanf("%d", &a[i]);/*%d指整数类型，scanf是输入,所以定义后输scanf运行后无内容*/ 
	 
   printf("In reverse order:");
   for (i = 0; i <= 10; i++)/*大于等于符号中间不要空格*/
   //此处若写成<=10，则会产生a[10]的不存在元素，即产生无限循环 
   sum += a[i];//在此处不断给sum赋值，直到i=10时退出循环 
   printf(" %d",a[i]);
   return 0;
}

