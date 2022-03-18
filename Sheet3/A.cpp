#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long n,ar[100000],sum=0;
	cin>>n;
	for(long i=0;i<n;i++)
	{
		cin>>ar[i];
		sum=sum+ar[i];
	}
	sum=abs(sum);
	cout<<sum;
	return 0;
}
