#include <stdio.h>
#include <math.h>

int main(){
	int i=0,a[11]={0};
	
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);//a[i]表示0-9数字的个数
	}
	for(i=1;i<10;i++){
		if(a[i]!=0){
			printf("%d",i);//打印出i,对应数字i 
			a[i]--;
			break;
		}
	}
	for(i=0;i<10;i++){
		while(a[i]!=0){
			printf("%d",i);
			a[i]--;
		}
	}
	printf("\n");
	
}

