#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;

struct book
{
	char type[15];
	char name[15];
	int like;
	bool exist;
};

int n=0;
book a[1000];

bool compare(book x, book y)
{
	if(x.like<y.like)
	{
		return true;
	}
	return false;
} 

int main()
{
	cin>>n;
	char com[15];
	int number=0;
	for(int i=0; i<n; i++)
	{
		cin>>com;
		if( strcmp(com, "ENLIST")==0 )
		{
			cin>>a[number].type>>a[number].name>>a[number].like;
			a[number].exist=true;
			number++;
		}
		
		else if( strcmp(com, "REMOVE")==0 )
		{
			char name[15];
			cin>>name;
			for(int j=0; j<number; j++)
			{
				if( a[j].exist==true && strcmp(a[j].name, name)==0 )
				{
					a[j].exist=false;
					break;
				}
			}
		}
		
		else if( strcmp(com, "REFINE")==0 )
		{
			char type[15];
			cin>>type;
			int maxlike=-1;
			int id=0;
			bool meet=false;
			for(int j=0; j<number; j++)
			{
				if( a[j].exist==true && strcmp(a[j].type, type)==0 )
				{
					meet=true;
					if(a[j].like>maxlike)
					{
						maxlike=a[j].like;
						id=j;
					}
					a[j].exist=false;
				}
			}
			if(meet==true)
			{
				a[number]=a[id];
				a[number].exist=true;
				number++;
			}
		}
		
		else if(  strcmp(com, "CLEANUP")==0 )
		{
			char type[15];
			cin>>type;
			for(int j=0; j<number; j++)
			{
				if( strcmp(a[j].type, type)==0 )
				{
					a[j].exist=false;
				}
			}
			sort(a, a+number, compare);
		}
	}
	int havebook=0;
	for(int i=number; i>-1 && havebook<3; i--)
	{
		if(a[i].exist==true)
		{
			cout<<a[i].type<<" ";
			cout<<a[i].name<<" ";
			cout<<a[i].like<<endl;
			havebook++;
		}
	}
	if(havebook==0)
	{
		cout<<"NULL";
	}
	return 0;
} 

