#include <stdio.h>

int main() {

    int T, i;

    scanf("%d\n", &T);  // ��T������

    for (i = 0; i < T; i++) 
	{    
       int  m, n, j;
	   scanf("%d%d",&m,&n);
       j = m;    
       int a, b, c, d = 0;
    
	   for(j = m; j < n;j++)
	   {
	   	    a = j /100;
	  	    b = (j / 10) % 10;
	  	    c = j % 10; 
//��Ϊ�����j��ÿ��ѭ�������������j�����԰�if������forѭ������	  	    
	  	if(a*100+b*10+c == a*a*a +b*b*b + c*c*c)
        {
        	printf("%d ",j);//���һ�����ݺ���Ŀո�Ӱ������ 
        	d++;//ע���d�Ĵ�����������ӡ -1 
	    }
	                printf("\n");
	   }
//Ϊ�˱������ʱ�ж�� -1 �����ж�������if����for���ˮ�ɻ����ж������� 
	    if(d==0)
	      printf("-1\n");
     } 
   
    return 0;

}


