#include<stdio.h>
#include<string.h>

//pStr��ָ����'\0'��β���ַ�����ָ��
//steps��Ҫ���ƶ���n
void LoopMove(char * pStr, int steps)
{
    int len = strlen(pStr);
    int st = steps % len; // ȡ��
    // �ַ�������Ϊ0�������ƶ������ƶ�����С�ڵ���0.���أ�Ҳ�ɱ���
    if (len == 0 || st == 0 || steps <= 0) return;
    char temp[100] = {0};
    memcpy(temp, pStr+len-st, st);
    memcpy(temp+st, pStr, len-st);
    memcpy(pStr, temp, len);
}

int main()
{
    char s[128] = "abcd";
    LoopMove(s, 5);
    printf("%s\n", s);
    return 0;
}
