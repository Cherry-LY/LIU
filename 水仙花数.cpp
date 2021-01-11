#include <stdio.h>

int main() {

    int T, i;

    scanf("%d\n", &T);  // 有T组数据

    for (i = 0; i < T; i++) 
	{    
       int  m, n, j;
	   scanf("%d%d",&m,&n);
       j = m;    
       int a, b, c, d = 0;
    
	   for(j = m; j < n;j++)
	   {
	   	    a = j /100;
	  	    b = (j / 10) % 10;
	  	    c = j % 10; 
//因为输出的j是每次循环后符合条件的j，所以把if语句放在for循环里面	  	    
	  	if(a*100+b*10+c == a*a*a +b*b*b + c*c*c)
        {
        	printf("%d ",j);//最后一个数据后面的空格不影响评分 
        	d++;//注意对d的处理，便于最后打印 -1 
	    }
	                printf("\n");
	   }
//为了避免输出时有多个 -1 ，把判定该语句的if放在for语句水仙花数判定的外面 
	    if(d==0)
	      printf("-1\n");
     } 
   
    return 0;

}


