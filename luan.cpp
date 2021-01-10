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
    scanf("%s",a);              //输入字符串 
    gets(a);
    n=strlen(a);                //用strlen函数读取字符串长度（长度到\0停止） 
    for(i = 0,j = n-1;i < n; i++, j--)  //循环将字符串a逆序赋值给b 
        b[j] = a[i];
    for(i = 0; i < n; i++) 
    { 
	    if(b[i] != a[i]) 
		break;                 //判断是否回文 
    } 
    if(i==n) 
	  printf("%c",a);   
} 
