/*检查数中重复出现的数字，有取余操作，害终于看懂代码了*/
#include<stdbool.h> /*C99 ONLY*/
#include<stdio.h>
int main() 
{  
    bool digit_seen[10]={false};//定义10个元素，因为用该数组来表示取余，余数只能取0-9一共十个值 
    int digit;
    long n; 

    printf ("Enter a number:");
    scanf("%ld", &n);//长整型，因为不确定输入的数字有几位 

    while (n > 0){ //假设输入数据为 n = 28212 
      digit = n % 10;//找数据的最后一位
     //取余，得到 2821余2，即最终结果为2 
      if (digit_seen[digit])//表示数组中的元素 ，为真时执行if语句，为假则跳过该if语句 
         break;//跳出while循环 
//由于没有花括号，所以if只管到第一个“；”处 
       digit_seen[digit] = true;
      n /= 10;//将 n 除以 10 的值赋给n 
    }
/*当digit取到某个值时，第一次遇到：元素尚为假，所以跳过if语句，直接执行赋值语句
    给数组中的对应元素为1，即为真
   之后改变n的值，再次进入while循环
   第二次遇到同样的digit值,已经赋值为真，执行if语句，跳出循环*/
    
    if (n > 0) //跳出循环后，如果是通过break跳出的，则此时 n > 0,  
      printf("Repeated digit\n");
    else 
      printf("No repeated digit\n");
    
	return 0;
} 
