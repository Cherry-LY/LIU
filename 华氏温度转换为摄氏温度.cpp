#include<stdio.h>
#define FREEZING_PT 32.f
#define SCALE_FACTOR (5/9)/*����ʾ��*/ 
/*�궨�壬�˴����ʽӦ�ò���5.0f/9.0f����ʽ������5/9
����5/9�����������������ȡ�������ʽ5/9�Ľ����Ϊ0*/ 

int main()
{
	float fahrenheit,celsius;
	
	printf("Enter Fahrenheit temperature:");
	scanf("%f",&fahrenheit);
	celsius = (fahrenheit-FREEZING_PT) * SCALE_FACTOR;
	printf("Celsius equivalent:%.1f\n",celsius);
	return 0;
}
