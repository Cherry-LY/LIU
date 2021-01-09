#include <stdio.h>
#include <string.h>

void reverseWords(char *str);  // 单词逆转函数声明

/* 主函数 */
int main(void)
{
    char str[] = "hello world! this will be reverse!"; // 待逆转字符串

    fprintf(stdout, "原字符串: \n\t%s\n", str);

    fprintf(stdout, "字符串单词逆序之后: \n\t");

#if 0 /* 方法一：使用第归函数 */
    reverseWords(str);

#else /* 方法二：使用算法 */

    char *ptrArr[100];      // 装每个单词的地址
    char *ret;
    int idx = -1;           // 指针数组元素索引：栈的数学模型思想 

    ret = strtok(str, " "); // 单词以空格隔开
    while (ret != NULL)
    {
        idx++;
        ptrArr[idx] = ret;
        ret = strtok(NULL, " ");
    }
    
    /* 逆序打印结果 */
    while (idx >= 0)
    {
        fprintf(stdout, "%s ", ptrArr[idx]);
        idx--;
    }
    putchar('\n');
#endif 

    return 0;
}

/*
 * 函数名：reverseWords
 * 函数功能：第归打印字符串中的单词
 * 参数：字符串地址
*/
void reverseWords(char *str)
{
    char *ret;

    /* 第一次传字符串指针给strtok */
    ret = strtok(str, " ");
    if (ret == NULL)  // 结束第归条件
    {
        return;
    }
    else
    {
        /* 第二次传 NULL 给strtok */ 
        reverseWords(NULL);
    }

    fprintf(stdout, "%s ", ret);
}
