#include<iostream>
using namespace std;
int main()
{
	int a[1000],n;
	cin>>n;
	for(long i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(long i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			a[i]=1;
		}
		else if(a[i]<0)
		{
			a[i]=2;
		}
		cout<<a[i]<<" ";
	}
	return 0;
}
