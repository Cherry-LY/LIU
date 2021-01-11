#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m,n,d,e;
	int a[d],b[e];
	int c[d+e];
	int i,j;
	m = sizeof(a)/sizeof(a[0]);
	n = sizeof(b)/sizeof(b[0]);
	scanf("%d %d",&m,&n);
	d = m;
	e = n;
	
	for(i=0;i<d;i++){
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	for(j=0;j<e;j++,i++){
		scanf("%d",&b[j]);
		c[i]=b[j];
	}
	
	int p=m+n,q,t;
	
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

