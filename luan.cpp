#include <stdio.h> 
#include<string.h>     
void judge(char*a,char*b);

int main() 
{ 
    char a[999],b[999]; 
	int m;
	scanf("%d", &m);
	for (int r = 0; r < m; r++) {
		if (a[0] != '0' && b[0] != '0') 
		judge(a,b);
	}
	return 0;
}

void judge(char*a,char*b)
{
    int i,j,n;
    scanf("%s",a);              //�����ַ��� 
    gets(a);
    n=strlen(a);                //��strlen������ȡ�ַ������ȣ����ȵ�\0ֹͣ�� 
    for(i = 0,j = n-1;i < n; i++, j--)  //ѭ�����ַ���a����ֵ��b 
        b[j] = a[i];
    for(i = 0; i < n; i++) 
    { 
	    if(b[i] != a[i]) 
		break;                 //�ж��Ƿ���� 
    } 
    if(i==n) 
	  printf("%c",a);   
} 
