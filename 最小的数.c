#include <stdio.h>
#include <math.h>

int main(){
	int i=0,a[11]={0};
	
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);//a[i]��ʾ0-9���ֵĸ���
	}
	for(i=1;i<10;i++){
		if(a[i]!=0){
			printf("%d",i);//��ӡ��i,��Ӧ����i 
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

