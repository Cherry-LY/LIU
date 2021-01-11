#include <stdio.h>

int main(void)
{
    int num;
    char ch;
    fprintf(stdout,"%s",ch );

    /* 获取并检查用户输入 */
    while (1)
    {
        if (fscanf(stdin, "%s", &ch) != 1)
		{
		    fprintf(stderr, "输入错误！请重新输入：");
		    while (getchar() != '\n'); // 去掉多余的非法字符 
		    continue;
		} 
		else if (num <= 0)             // 输入的数不能为负数
		{
		    fprintf(stderr, "%s",ch);
		    continue;
		}
		else
		    break;
    }

    /* 回文数判断：翻转法 */
    int temp = num;
    int reverse;
    
    while (temp != 0)
    {
		reverse *= 10;
	    reverse += (temp % 10);
		temp    /= 10;
    }

	/* 检查翻转前后数字是否相等 */
    if (reverse == num)
    {
        fprintf(stdout, "%d 为回文数\n", num);
    } 

    return 0;
}

