/*D: ��ʾ��״ͼ
����
������������ֺͷ���������Ӧ����״ͼ��ʾ��
����
ÿ���������һ��������������һ������m(1<=m<=20)��
��ʾ�����m�����ݣ�ÿ��������һ������n��-15<=n<=15����һ���ַ���ɣ�
ÿ������֮���ÿո�ָ������ִ�����״ͼ�ĸ߶ȣ���ĸ�������ʹ�õĻ�ͼ���š�
������ֺ�û����ĸ��Ĭ�ϸ����Ļ�ͼ����ʹ�üӺš�+����

���
ÿ����֮����1���ո�����ͼ�Ŀհ״��ÿո���䡣�ü��š�-����ʾx�ᡣ������״���ϣ�������״���¡�
����
����
6 1a 3 4b 2 -2 1
���
    b      
  + b      
  + b +    
a + b +   +
-----------
        +  
        +  
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
   char table[21][31];//��ʾ
   int num[20];//��������
   char sign[20];//���շ���
   int n,i,j;
   scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        scanf("%c",&sign[i]);
    }
    int up=0,down=0;//��ʾx���Ϸ����·����ж�����
    for(i=0;i<n;i++)
    {
        if(num[i]>0&&up<num[i])
        {
            up=num[i];

        }
        else if(num[i]<=0&&down>num[i])
        {
            down=num[i];

        }
    }
    int row=up-down+1;

    for(j=0;j<n;j++)
    {
        if(num[j]>0)
        {
            for(i=0;i<row;i++)
            {
                if(i<up-num[j])
                {
                    table[i][j]=' ';
                }
                else if(i<up&&i>=up-num[j])
                {
                    if(sign[j]==' '||sign[j]=='\n')
                    {
                        table[i][j]='+';
                    }
                    else{
                        table[i][j]=sign[j];
                    }

                }
                else if(i==up)
                {
                    table[i][j]='-';
                }
                else
                {
                    table[i][j]=' ';
                }
            }
        }
        else
        {
            for(i=0;i<row;i++)
            {

                if(i<up)
                {
                    table[i][j]=' ';
                }
                else if(i==up)
                {
                    table[i][j]='-';
                }
                else if(i>up&&i<=up-num[j])
                {
                    if(sign[j]==' '||sign[j]=='\n')
                    {
                        table[i][j]='+';
                    } else{
                        table[i][j]=sign[j];
                    }
                }
                else
                    {
                     table[i][j]=' ';

                }
            }

        }
    }


    for(i=0;i<row;i++)
    {
        if(i==up)
        {
            for(j=0;j<n;j++)
            {
                if(j==n-1)
                {
                    printf("%c",table[i][j]);
                }
                else
                {
                    printf("%c-",table[i][j]);
                }

            }
        }
        else
        {
            for(j=0;j<n;j++)
            {
                printf("%c ",table[i][j]);
            }
        }
        printf("\n");
    }


    return 0;

}
