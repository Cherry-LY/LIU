#include <stdio.h> 
#include<string.h>              //strlen函数的头文件 
void judge(char*a,char*b);

int main() 
{ 
    char a[999],b[999]; 
	int n;
	scanf("%d", &n);//n为正整数 
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
    scanf("%s",a);              //输入字符串 
    m=strlen(a);                //用strlen函数读取字符串长度（长度到\0停止） 
    for(i = 0,j = m-1;i < m; i++, j--)  //循环将字符串a逆序赋值给b 
        b[j] = a[i];
    for(i = 0; i < m; i++) 
    { 
	    if(b[i] != a[i]) 
		break;                 //判断是否回文 
    } 
    if(i==m) printf("Yes");
    else printf("No");    
} 
