#include<iostream>
using namespace std;
int main()
{
	int n,t,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		sum=sum+(t*3);
	}
	cout<<sum;
	return 0;
}
