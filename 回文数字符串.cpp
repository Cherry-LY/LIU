#include <stdio.h> 
#include<string.h>              //strlen������ͷ�ļ� 
void judge(char*a,char*b);

int main() 
{ 
    char a[999],b[999]; 
	int n;
	scanf("%d", &n);//nΪ������ 
	for (int r = 0; r < n; r++) {
		
		if (a[0] != '0' && b[0] != '0') 
		 judge(a,b);
		 printf("\n");
		 
	}
	return 0;
}

void judge(char*a,char*b)
{
    int i,j,m;
    scanf("%s",a);              //�����ַ��� 
    m=strlen(a);                //��strlen������ȡ�ַ������ȣ����ȵ�\0ֹͣ�� 
    for(i = 0,j = m-1;i < m; i++, j--)  //ѭ�����ַ���a����ֵ��b 
        b[j] = a[i];
    for(i = 0; i < m; i++) 
    { 
	    if(b[i] != a[i]) 
		break;                 //�ж��Ƿ���� 
    } 
    if(i==m) printf("Yes");
    else printf("No");    
} 
