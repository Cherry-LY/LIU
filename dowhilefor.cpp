/*do�����while�����for���*/
/*i++��++i ��ѭ���е�Ч����ͬ*/ 
#include<stdio.h>
int main()
{
	int i,n,m,p;
	i=1;
	while(i<10){
	printf("T minus %d and counting\n",i);
	++i;/*����ط���������do��仹��while���ʱ:  i++��++iЧ����ͬ*/ 
	}
	
	n=10;
	do{
		printf("T minus %d and counting.\n",n);
		n--;
	}while(n>0);
	
	for(m=10;m>0;m--)
	  printf("M minus %d and counting\n",m);
	for(p=10;p>0;p--)
	  printf("P minus %d and counting.\n",p);
	    
	return 0;
 } 
 /*Ϊɶ������һ���أ�������������*/ 
