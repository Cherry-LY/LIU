/* Prints a table of compound interest */

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{
  int i, low_rate, num_years, year;
  double value[5];//定义value数组是为了表述投资的基数，各个组数 

  printf("Enter interest rate: ");
  scanf("%d", &low_rate);
  printf("Enter number of years: ");
  scanf("%d", &num_years);
  
  printf("\nYears");
  for (i = 0; i < NUM_RATES; i++) {
    //此处NUM_RATES表示value数组的元素个数，输出的不同利率种类数与元素个数对应  
    printf("%6d%%", low_rate + i);//要写+i，不能写+1，因为 low_rate已经有确定值 
    value[i] = INITIAL_BALANCE;// 定义某一年的投资基数 
  }
  printf("\n"); 

  for (year = 1; year <= num_years; year++) {
    printf("%3d    ", year);//空格是年份后面的空格，与后面的数据隔开 ，更加美观  
    for (i = 0; i < NUM_RATES; i++) {
      value[i] += (low_rate + i) / 100.0 * value[i];//除以100.0，将整型变量转换为double型
	  //若除以100，则还是取整，等于0 
	  //此处相当于先让value[i]+(low_....  然后再将该值赋值给value[i] 
      printf("%7.2f", value[i]);
    }
    printf("\n");
  }
//一行一行的出数据（即一年一年的算不同利率下的投资）
 
  return 0;
}


