/*检查数中重复出现的数字，有取余操作，害又没看懂课本代码*/
#include<stdbool.h> /*C99 ONLY*/
#include<stdio.h>
int main() 
{  
bool digit_seen[10]={false};
int digit;
long n;

printf ("Enter a number:");
scanf("%ld", &n);

while (n > 0){ 
digit =n % 10;
if (digit_seen[digit])
  break;
  digit_seen[digit] = true;
  n/=10;
}
if (n > 0)
  printf("Repeated digit\n");
else   
  printf("No repeated digit\n");
return 0;
 } 
