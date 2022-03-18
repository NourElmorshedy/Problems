#include<iostream>
using namespace std;
int main()
{
	long n,ctrE=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			cout<<i<<endl;
			ctrE++;
		}
	}
	if(ctrE==0)
	{
		cout<<-1;
	}
	
	return 0;
}
