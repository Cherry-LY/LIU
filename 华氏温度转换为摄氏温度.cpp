#include<stdio.h>
#define FREEZING_PT 32.f
#define SCALE_FACTOR (5/9)/*错误示范*/ 
/*宏定义，此处表达式应该采用5.0f/9.0f的形式而不用5/9
若用5/9，则程序会对其结果向下取整，表达式5/9的结果将为0*/ 

int main()
{
	float fahrenheit,celsius;
	
	printf("Enter Fahrenheit temperature:");
	scanf("%f",&fahrenheit);
	celsius = (fahrenheit-FREEZING_PT) * SCALE_FACTOR;
	printf("Celsius equivalent:%.1f\n",celsius);
	return 0;
}
