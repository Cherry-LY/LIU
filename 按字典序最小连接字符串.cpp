#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;

struct mystring
{
	char str[60];	
};
mystring a[50001];

bool compare(mystring x, mystring y)
{
	char tmp1[110];
	char tmp2[110]; 
	strcpy(tmp1, x.str);
	strcpy(tmp2, y.str);
	strcat(tmp1, y.str);
	strcat(tmp2, x.str);
	if(strcmp(tmp1, tmp2)<0)
	{
		return true;
	}
	return false;
} 

int main()
{
	int n=0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a[i].str;
	}
	stable_sort(a, a+n, compare);
	for(int i=0; i<n; i++)
	{
		cout<<a[i].str;
	}	
	return 0;
} 
