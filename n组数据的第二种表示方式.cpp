/*#include <stdio.h>
n������������ı�ʾ��ʽ 
int main() 
{
    int n, i;
    scanf("%d", &n);  // ��n������
    for (i = 0; i < n; i++) {
        int a, b, c, d;
        // ����4������������4���������򣬲�������
    }
    return 0;
}*/

#include<stdio.h>

int main()
{
	int n, i;
	char a[999],b[999];
	scanf("%d",&n);//��n������
	for( i=0; i<n; i++){
		scanf("%d %d",&a[i],&b[i]);
		printf("%d\n",a[i]*b[i]);
	}
	return 0;	 
 } 
