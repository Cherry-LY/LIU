/*变量和赋值，同时练习与辨析 %d 和 %f 以及限制 %f 的显示位数*/ 
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
 printf("v:%.2f\n",height*length*width);/*与第11行等价*/ 
 printf("%f\n",height*length*width);
 return 0;
}
