#include <stdio.h>
#include <math.h>
int Prime(int m)
{
	int d;
	for(d=2;d<=m;d++)
	 if(m % d == 0) 
	   break; 
	   
	if(d<m)
	 return 0;
	else
	 return -1;
}
int main()
{
 	int k,i,x;
	scanf("%d", &k);//表示有k组数据 
	for(i=0;i<k;i++){ 
       int x, a;
	   scanf("%d",&x);
	   
	   if(Prime(x))
	     printf("%d\n",x);//如果x是素数，直接输出x 
	   else{
	      while (x >= 2){//如果x最初是大于等于2的非素数 
	            for(a = 2; a <= x; a++){
	                if(Prime(a) && x%a == 0){
			          printf("%d",a);
			            if(a != x)
			               printf("*");
			            else
			               printf("\n");
			            x = x / a;//再次赋值后x可能成为素数 
					    a = 1;
			        }  
			    }	
		    }	
		}
	} 
	 return 0;
}
