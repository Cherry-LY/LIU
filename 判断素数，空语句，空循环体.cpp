/*判断n是否为素数，空语句*/
#include<stdio.h>
int main()

{

	int d,n;
	scanf("%d",&n);
	for(d=2;d<n && n%d!=0;d++)
	   ;  //定义for(1;2;3)  定义1，当满足2条件时，进行后续操作，再执行3命令 
//如果for语句后面不加“；”，则运行过后无法正常输出 
//注意放置“；”的位置，放在下一行更容易辨别，如果放在同一行会容易和普通for语句混淆
	if(d<n)
	 printf("%d is divisible by %d\n",n,d);
	else
	 printf("%d is prime.\n",n);
	return 0;
}
 
