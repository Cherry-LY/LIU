/*do语句与while语句与for语句*/
/*i++与++i 在循环中的效果相同*/ 
#include<stdio.h>
int main()
{
	int i,n,m,p;
	i=1;
	while(i<10){
	printf("T minus %d and counting\n",i);
	++i;/*这个地方无论在用do语句还是while语句时:  i++和++i效果相同*/ 
	}
	
	n=10;
	do{
		printf("T minus %d and counting.\n",n);
		n--;
	}while(n>0);
	
	for(m=10;m>0;m--)
	  printf("M minus %d and counting\n",m);
	for(p=10;p>0;p--)
	  printf("P minus %d and counting.\n",p);
	    
	return 0;
 } 
 /*为啥两个都一样呢？？？？？？？*/ 
