#include <stdio.h>

int main(void)
{
    int num;
    char ch;
    fprintf(stdout,"%s",ch );

    /* ��ȡ������û����� */
    while (1)
    {
        if (fscanf(stdin, "%s", &ch) != 1)
		{
		    fprintf(stderr, "����������������룺");
		    while (getchar() != '\n'); // ȥ������ķǷ��ַ� 
		    continue;
		} 
		else if (num <= 0)             // �����������Ϊ����
		{
		    fprintf(stderr, "%s",ch);
		    continue;
		}
		else
		    break;
    }

    /* �������жϣ���ת�� */
    int temp = num;
    int reverse;
    
    while (temp != 0)
    {
		reverse *= 10;
	    reverse += (temp % 10);
		temp    /= 10;
    }

	/* ��鷭תǰ�������Ƿ���� */
    if (reverse == num)
    {
        fprintf(stdout, "%d Ϊ������\n", num);
    } 

    return 0;
}

