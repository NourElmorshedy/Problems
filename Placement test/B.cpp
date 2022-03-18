#include<iostream>
using namespace std;
int main()
{
	long n,x,a,i=0,c=0;
	cin>>n>>x>>a;
	if(n*x==a ||n*x<a )
	{
		cout<<1;
	}
	else if(n*x>a)
	{
		while(i<n*x)
		{
			i=i+(n*x)%a;
			c++;
		}
		cout<<c;
	}
	return 0;
}
