#include<iostream>
using namespace std;
int main()
{
	int n,a[9999],c=0,r,f=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			r=a[i];
			
			while(r!=0)
			{
				if(a[i+1]>0)
				{
					r=r+a[i+1];
					i++;
				}
				
				else if(a[i+1]==-1)
				{
					r--;
					i++;
				}
				
				else if(i==(n-1))
				{
					f=1;
					break;
				}
			}
		}
		
		else if(a[i]<0)
		{
			c++;
		}
	}
	cout<<c;
	return 0;
}
