#include <stdio.h>
#include <string.h>

void reverseWords(char *str);  // ������ת��������

/* ������ */
int main(void)
{
    char str[] = "hello world! this will be reverse!"; // ����ת�ַ���

    fprintf(stdout, "ԭ�ַ���: \n\t%s\n", str);

    fprintf(stdout, "�ַ�����������֮��: \n\t");

#if 0 /* ����һ��ʹ�õڹ麯�� */
    reverseWords(str);

#else /* ��������ʹ���㷨 */

    char *ptrArr[100];      // װÿ�����ʵĵ�ַ
    char *ret;
    int idx = -1;           // ָ������Ԫ��������ջ����ѧģ��˼�� 

    ret = strtok(str, " "); // �����Կո����
    while (ret != NULL)
    {
        idx++;
        ptrArr[idx] = ret;
        ret = strtok(NULL, " ");
    }
    
    /* �����ӡ��� */
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
 * ��������reverseWords
 * �������ܣ��ڹ��ӡ�ַ����еĵ���
 * �������ַ�����ַ
*/
void reverseWords(char *str)
{
    char *ret;

    /* ��һ�δ��ַ���ָ���strtok */
    ret = strtok(str, " ");
    if (ret == NULL)  // �����ڹ�����
    {
        return;
    }
    else
    {
        /* �ڶ��δ� NULL ��strtok */ 
        reverseWords(NULL);
    }

    fprintf(stdout, "%s ", ret);
}
