#include<iostream>
using namespace std;
int main()
{
	long x,n,a[100000],c=0;
	cin>>n;
	for(long i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	for(long i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			cout<<i;
			return 0;
		}
		else
		{
			c++;
		}
	}
	if(c>0)
	{
		cout<<-1;
	}
	return 0;
}
