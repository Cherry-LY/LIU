/*判断是否为素数*/
/*循环，break与continue与goto*/
/*continue到底是个啥玩意？？？*/
#include<stdio.h>
int main()
{
/*	int d,n;
	scanf("%d",&n);
	for(d=2;d<n;d++)//定义for(1;2;3)  定义1，当满足2条件时，进行后续操作，再执行3命令 
	  if(n%d==0)
	   break;
     //break只能跳出一层嵌套语句，将语句从最内层的while/do/for/switch语句中转移出来 
	 if(d<n)
	 printf("%d is divisoble by %d\n",n,d);
	 else
	 printf("%d is prime.\n",n);
	return 0;
*/  //上述运行无误，只是为了保留注释 


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


//上述为不知所云系列




	int d,n;
	scanf("%d",&n);
	for(d=2;d<n;d++)//定义for(1;2;3)  定义1，当满足2条件时，进行后续操作，再执行3命令 
	  if(n%d==0)
	   goto done;
done:
	 if(d<n)
	 printf("%d is divisoble by %d\n",n,d);
	 else
	 printf("%d is prime.\n",n);
	return 0; 
}
