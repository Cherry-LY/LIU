#include<iostream>
#include<algorithm>
using namespace std;

struct birth
{
	char name[20];
	int month;
	int day;
};

birth stu[100];
char chosen[100];

char compare(birth x, birth y)
{
	if(x.month < y.month)
	{
		return true;
	}
	if(x.month == y.month)
	{
		if(x.day < y.day)
		{
			return true;
		}
	}
	return false;
} 

int main()
{
	ios::sync_with_stdio(false);
	int n=0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>stu[i].name;
		cin>>stu[i].month;
		cin>>stu[i].day;
	}
	stable_sort(stu, stu+n, compare);
	for(int i=0; i<100; i++)
	{
		chosen[i]=false;
	}
	for(int i=0; i<n-1; i++)
	{
		if(chosen[i])
		{
			continue;
		}	
		if(stu[i].month==stu[i+1].month && stu[i].day==stu[i+1].day)
		{
			chosen[i]=true;
			chosen[i+1]=true;
			cout<<stu[i].month<<" "<<stu[i].day<<" ";
			cout<<stu[i].name<<" "<<stu[i+1].name;
			for(int j=i+1; stu[j].month==stu[j+1].month&&stu[j].day==stu[j+1].day; j++)
			{
				chosen[j]=true;
				cout<<" "<<stu[j+1].name;
			}
			cout<<endl;
		}
	}
	return 0;
}

