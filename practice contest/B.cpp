#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,min,sum=0,c=0;
	char v[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		sum=sum+i;
	}
	
	for(int j=0;j<n;j++)
	{
		min=v[j]+v[j+1];
		if(min>sum/n)
		{
			c++;
		}
	}
	cout<<c;
	
	
}
