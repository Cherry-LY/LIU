#include<iostream>
using namespace std;
int determinant(int a[6][6],int x)
{
	if(x==1)
	{
		return a[0][0];
	}
	int ans=0,s=1;
	for(int k=0; k<x; k++)
	{
		int b[6][6];
	    for(int i=0; i<6; i++)
	    {
	        for(int t=0; t<6; t++)
		    {
			    b[i][t]=0;
		    }
	    }
		for(int i=1; i<x; i++)
	    {
		    int m=0;
		    for(int t=0; t<x; t++)
		    {
			    if(t==k)
			    {
			    	continue;
				}
				else
				{
					b[i-1][m]=a[i][t];
			        m++;
				}
		    }
	    }
	    ans=ans+ s * a[0][k] * determinant(b,x-1);
	    s=s*(-1);
	}
	return ans;
}
int main()
{
	int n=0;
	cin>>n;
	int matrix[6][6];
	for(int i=0; i<6; i++)
	{
		for(int t=0; t<6; t++)
		{
			matrix[i][t]=0;
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int t=0; t<n; t++)
		{
			cin>>matrix[i][t];
		}
	}
	int w=determinant(matrix,n);
	cout<<w;
	return 0;
}
