#include<stdio.h>
#include<math.h>

int main()
{
	int n, i;
	scanf("%d",&n);
	for(i=0;i<n;i++){	
        double m;
        scanf("%lf",&m);
		if(m<0)
		  printf("ERROR\n");
		else 
		  printf("%.2lf\n",sqrt(m));
	} 
	return 0;
}
