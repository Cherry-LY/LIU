/*�����͸�ֵ��ͬʱ��ϰ����� %d �� %f �Լ����� %f ����ʾλ��*/ 
#include<stdio.h>
int main()
{
 int height,length;
 float width,v;
 height=1;
 length=2;
 width=3.45;
 v=height*width*length;
 printf("V:%.2f\n",v);
 printf("v:%.2f\n",height*length*width);/*���11�еȼ�*/ 
 printf("%f\n",height*length*width);
 return 0;
}
