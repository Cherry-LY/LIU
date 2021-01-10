#include<stdio.h>

 int age(int n,int a,int k)
/*n,a,k分别代表摆龙门阵的小伙伴的人数、第一号小伙伴的年龄 和相邻编号小伙伴的年龄差*/ 
{

	if (n==1)
	  return a;
	else
      return age(n-1,a,k) + k ;

}
int main()
{
	
 int n,a,k,years_old;
    
	/*printf("请分别输入摆龙门阵的人数，第一号小伙伴的年龄、和相邻小伙伴的年龄差:\n");
	此句不妨碍运行，但是不符合题目要求，题目中输入只有数字*/ 
	scanf("%d %d %d",&n,&a,&k); 
	
	if(n<=0||k>=100||a<=0||k<=0||n<2)
	  {printf("Wrong number");
	}
	else {
	  years_old = age(n,a,k);
	  printf("%d",years_old);
    }
    
	return 0;
}
