#include<iostream>
using namespace std;
int main()
{
	int k,w,p=0,mon;
	long n;
	cin>>k>>n>>w;
	for(int i=1;i<=w;i++)
	{
		p=p+k*i;
	}
	
	if(n>=p)
	{
		cout<<0;
	}
	
	else
	{
		mon=p-n;
		cout<<mon;
	}
}
