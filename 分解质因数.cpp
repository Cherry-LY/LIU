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
	scanf("%d", &k);//��ʾ��k������ 
	for(i=0;i<k;i++){ 
       int x, a;
	   scanf("%d",&x);
	   
	   if(Prime(x))
	     printf("%d\n",x);//���x��������ֱ�����x 
	   else{
	      while (x >= 2){//���x����Ǵ��ڵ���2�ķ����� 
	            for(a = 2; a <= x; a++){
	                if(Prime(a) && x%a == 0){
			          printf("%d",a);
			            if(a != x)
			               printf("*");
			            else
			               printf("\n");
			            x = x / a;//�ٴθ�ֵ��x���ܳ�Ϊ���� 
					    a = 1;
			        }  
			    }	
		    }	
		}
	} 
	 return 0;
}
