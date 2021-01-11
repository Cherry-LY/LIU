#include<stdio.h>
#include<string.h>
//ดํมห 
int main()
{
    int m,n, p=m+n;
	int q,t;
	scanf("%d %d\n",&m,&n);
	int a[m],b[n];
	int c[p];
	int i,j;
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
		
        strcpy(c,a);
	for(j=0;j<n;j++){
		scanf("%d",&b[j]);
	}

        strcat(c,b);
	
	for(i=0;i<p;i++){
		for(j=0;j<p-i;j++){
			if(c[j]>c[j+1])
			{  t=c[j];
			   c[j]=c[j+1];
			   c[j+1]=t;
			}
	    }  
	}
	for(i=0;i<p;i++)
	  printf("%d ",c[i]);
	
	return 0;
 } 

