#include<stdio.h>
int main()
{
	while(1)
	{		
	   double number1=0.0;
	   double number2=0.0;
	   char operation=0;
	
	   printf("\n������Ҫ�����ʽ�ӣ�\n");
	   scanf("%lf%c%lf",&number1,&operation,&number2);
	
	   switch(operation)
	   {
	      case '+':
	           printf("=%lf\n\n",number1+number2);
	          break;
	
	      case '-':
	           printf("=%lf\n\n",number1-number2);
	           break;
	
	      case '*':
	           printf("=%lf\n\n",number1*number2);
	           break;
	
	      case '/':
	           if(number2==0)
	             printf("\n\n����������Ϊ0��\n");
	           else
	             printf("=%lf\n\n",number1/number2);
	           break;
	
	      case '%':
	           if((long)number2==0)  
	             printf("\n\n����������Ϊ0��\n"); 
	           else
	             printf("=%ld\n",(long)number1%(long)number2);      
	           break;
	
	      default:
	          printf("���������룡��\n"); 
	          break;          
	    }	
	}   
    return 0;
}
