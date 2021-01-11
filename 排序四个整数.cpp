#include <stdio.h>

int main() {

    int n, i;

    scanf("%d\n", &n);  // 有n组数据

    for (i = 0; i < n; i++) {
        
		// 读入4个整数，对这4个整数排序，并输出结果

        // 请将排序代码写在这里，不能使用循环语句
 
        int a, b, c, d;
        int temp;
 //a <= b <= c <= d       
        scanf("%d%d%d%d",&a,&b,&c,&d);
        
        if(a > b)
        {
        	temp = a;
        	a = b;
        	b = temp;//把ab中值较小的一个定为a,此时满足 a <= b ,b变成原始ab中较大的一个 
		}
        if(b > c)
        {
        	temp = b;
        	b = c;
        	c = temp;//把bc中值较小的一个定为b ,此时满足 b <= c ，但是有可能新赋值之后的b<a 
		}
        if(c > d)
        {
        	temp = c;
        	c = d;
        	d = temp;//把cd中值较小的一个定为c ,此时满足 c <= d ,但是有可能新赋值后的 
		} 
		if(a > b)
        {
        	temp = a;
        	a = b;
        	b = temp;//把ab中值较小的一个定为a,此时满足 a <= b ,b变成原始ab中较大的一个 
		}
        if(b > c)
        {
        	temp = b;
        	b = c;
        	c = temp;//把bc中值较小的一个定为b ,此时满足 b <= c ，但是有可能新赋值之后的b<a 
		}
		if(a > b)
        {
        	temp = a;
        	a = b;
        	b = temp;//把ab中值较小的一个定为a,此时满足 a <= b ,b变成原始ab中较大的一个 
		}

    printf("%d %d %d %d\n",a,b,c,d);//就这一个换行符值20分 
    }
     
    return 0;

}


