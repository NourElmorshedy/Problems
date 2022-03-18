#include<iostream>
using namespace std;
int main()
{
	int n,c=0;
	char a[50];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int j=0;j<n;j++)
	{
		if(a[j]==a[j+1])
		{
			c++;
		}
	}
	cout<<c;
}
