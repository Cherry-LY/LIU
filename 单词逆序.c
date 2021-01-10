#include<stdio.h>
// reverse a string
void reverse(char *a, int b, int c) 
{
    char ch;
    while (b < c) {
        ch = a[b];
        a[b] = a[c];
        a[c] = ch;//当 b < c时，让a[b]和a[c]交换 
        b++;
        c--;
    }//直到 b >= c为止 
}

int main() {
    char a[10000];
    scanf("%[^\n]", a);
/*输入字符串 ,[^\n]表示一读入换行字符就结束读入。这个是scanf的正则用法。
因为scanf不能接收空格符，一接受到空格就结束读入，
所以不能像gets()等函数一样接受一行字符串，
但是使用%[^\n]就可以一直读数，直到碰到’\n’才结束读入 */ 
    int b = 0;
    int i = 0; 

    while ('\0' != a[i]) {
        while (' ' != a[i] && '\0' != a[i]) {
            i++;
        }
        if (' ' == a[i]) {
            reverse(a, b, i-1);
            b = i + 1;
            i ++;
        }
        if ('\0' == a[i]) {
            reverse(a, b, i-1);
        }
    }   
    printf("%s\n", a);
    return 0;
}
