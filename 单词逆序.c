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
    scanf("%[^\n]", a);
/*�����ַ��� ,[^\n]��ʾһ���뻻���ַ��ͽ������롣�����scanf�������÷���
��Ϊscanf���ܽ��տո����һ���ܵ��ո�ͽ������룬
���Բ�����gets()�Ⱥ���һ������һ���ַ�����
����ʹ��%[^\n]�Ϳ���һֱ������ֱ��������\n���Ž������� */ 
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
