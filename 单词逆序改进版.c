#include<stdio.h>
// reverse a string
void reverse(char *a, int b, int c) 
{
    char ch;
    while (b < c) {
        ch = a[b];
        a[b] = a[c];
        a[c] = ch;//�� b < cʱ����a[b]��a[c]���� 
        b++;
        c--;
    }//ֱ�� b >= cΪֹ 
}

int main() {
    char a[10000];
    scanf("%[^\n]",a);

    int b = 0;
    int i = 0; 

    while ('.' != a[i]) {
        while (' ' != a[i] && '.' != a[i]) {
            i++;
        }
        if (' ' == a[i]) {
            reverse(a, b, i-1);
            b = i + 1;
            i ++;
        }
        if ('.' == a[i]) {
            reverse(a, b, i-1);
        }
    }   
    printf("%s\n", a);
    return 0;
}
