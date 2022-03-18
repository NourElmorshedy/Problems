#include<iostream>
using namespace std;
int main()
{
	int n,ar[100],t1,even=0,t2,odd=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(int j=0;j<n;j++)
	{
		if(ar[j]%2==0)
		{
			t1=j;
			even++;
		}
		else
		{
			t2=j;
			odd++;
		}
	}
	if(even==1)
      cout<<t1+1;
    else if(odd==1)
      cout<<t2+1;

}
