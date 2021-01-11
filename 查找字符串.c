#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void process(){
	char a[101]={0};
	int i=0,l,flag=1,counta=0,counts=0;
	scanf("%s",&a);
	l=strlen(a);
	for(i=0;i<l;){
		if(a[i]!='A'&&a[i]!='S'){
			flag=0;
			break;
		}
		else if(a[i]=='A'){
			while(a[i]=='A'&&i<l){
			    i++;	
			}
			counta++;
		}
		else if(a[i]=='S'){
			if(a[++i]=='C'&&i<l){
				if(a[++i]=='U'&&i<l){
					counts++;
					i++;
				}
				else{
					flag=0;
					break;
				}
			}
			else{
				flag=0;
				break;
			}
		}
	}
	if((counta!=2&&counta!=1&&counta!=0)||counts!=1){
		flag=0;
	}
	if(flag==1)printf("YES\n");
	else printf("NO\n");
}

int main(int argc, char *argv[]) {
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		process();
	}
	return 0;
}

