/* Prints a table of compound interest */

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{
  int i, low_rate, num_years, year;
  double value[5];//����value������Ϊ�˱���Ͷ�ʵĻ������������� 

  printf("Enter interest rate: ");
  scanf("%d", &low_rate);
  printf("Enter number of years: ");
  scanf("%d", &num_years);
  
  printf("\nYears");
  for (i = 0; i < NUM_RATES; i++) {
    //�˴�NUM_RATES��ʾvalue�����Ԫ�ظ���������Ĳ�ͬ������������Ԫ�ظ�����Ӧ  
    printf("%6d%%", low_rate + i);//Ҫд+i������д+1����Ϊ low_rate�Ѿ���ȷ��ֵ 
    value[i] = INITIAL_BALANCE;// ����ĳһ���Ͷ�ʻ��� 
  }
  printf("\n"); 

  for (year = 1; year <= num_years; year++) {
    printf("%3d    ", year);//�ո�����ݺ���Ŀո����������ݸ��� ����������  
    for (i = 0; i < NUM_RATES; i++) {
      value[i] += (low_rate + i) / 100.0 * value[i];//����100.0�������ͱ���ת��Ϊdouble��
	  //������100������ȡ��������0 
	  //�˴��൱������value[i]+(low_....  Ȼ���ٽ���ֵ��ֵ��value[i] 
      printf("%7.2f", value[i]);
    }
    printf("\n");
  }
//һ��һ�еĳ����ݣ���һ��һ����㲻ͬ�����µ�Ͷ�ʣ�
 
  return 0;
}


