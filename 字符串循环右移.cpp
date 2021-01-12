#include<stdio.h>
#include<string.h>

//pStr是指向以'\0'结尾的字符串的指针
//steps是要求移动的n
void LoopMove(char * pStr, int steps)
{
    int len = strlen(pStr);
    int st = steps % len; // 取余
    // 字符串长度为0，或不需移动，或移动步数小于等于0.返回，也可报错。
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
