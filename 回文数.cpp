/*�������ݣ�δʹ���ַ���*/
//�жϻ�������n������ 
#include<stdio.h>
int main()
{
	int n,i;
	int num,s,y=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){	
	scanf("%d", &num);
	s=num;
	while(s>0)
	  {
		y=y*10+s%10;
		s=s/10;
	  } 
	  	if(y==num)
		printf("yes\n", num);
	else
		printf("no\n", num);
	}

	return 0;
}
