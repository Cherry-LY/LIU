/*��������ظ����ֵ����֣���ȡ������������ڿ���������*/
#include<stdbool.h> /*C99 ONLY*/
#include<stdio.h>
int main() 
{  
    bool digit_seen[10]={false};//����10��Ԫ�أ���Ϊ�ø���������ʾȡ�࣬����ֻ��ȡ0-9һ��ʮ��ֵ 
    int digit;
    long n; 

    printf ("Enter a number:");
    scanf("%ld", &n);//�����ͣ���Ϊ��ȷ������������м�λ 

    while (n > 0){ //������������Ϊ n = 28212 
      digit = n % 10;//�����ݵ����һλ
     //ȡ�࣬�õ� 2821��2�������ս��Ϊ2 
      if (digit_seen[digit])//��ʾ�����е�Ԫ�� ��Ϊ��ʱִ��if��䣬Ϊ����������if��� 
         break;//����whileѭ�� 
//����û�л����ţ�����ifֻ�ܵ���һ���������� 
       digit_seen[digit] = true;
      n /= 10;//�� n ���� 10 ��ֵ����n 
    }
/*��digitȡ��ĳ��ֵʱ����һ��������Ԫ����Ϊ�٣���������if��䣬ֱ��ִ�и�ֵ���
    �������еĶ�ӦԪ��Ϊ1����Ϊ��
   ֮��ı�n��ֵ���ٴν���whileѭ��
   �ڶ�������ͬ����digitֵ,�Ѿ���ֵΪ�棬ִ��if��䣬����ѭ��*/
    
    if (n > 0) //����ѭ���������ͨ��break�����ģ����ʱ n > 0,  
      printf("Repeated digit\n");
    else 
      printf("No repeated digit\n");
    
	return 0;
} 
