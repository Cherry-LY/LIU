/*#include <stdio.h>
n组数据用数组的表示方式 
int main() 
{
    int n, i;
    scanf("%d", &n);  // 有n组数据
    for (i = 0; i < n; i++) {
        int a, b, c, d;
        // 读入4个整数，对这4个整数排序，并输出结果
    }
    return 0;
}*/

#include<stdio.h>

int main()
{
	int n, i;
	char a[999],b[999];
	scanf("%d",&n);//有n组数据
	for( i=0; i<n; i++){
		scanf("%d %d",&a[i],&b[i]);
		printf("%d\n",a[i]*b[i]);
	}
	return 0;	 
 } 
