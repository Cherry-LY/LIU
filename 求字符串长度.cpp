//*���ַ�������
//����һ���ַ����Իس������� ���ַ������ȡ� 

/*
#include<stdio.h>
#include<string.h>

 void compute(char *a);
 int main()
 
 {   int b;
     char a[999];
    b = strlen(a);
	scanf("%s",&a);
	printf("%d",b);
	return 0;	 
} 
*/


#include<stdio.h>

int main()
{
	char ch;
	int len = 0;
	ch = getchar();
	while(ch != '\n'){
		len++;
		ch = getchar();
	}
	printf("%d",len);
	
	return 0;
}
