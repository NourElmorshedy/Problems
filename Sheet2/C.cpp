#include<iostream>
using namespace std;
int main()
{
	long n,x,ctrE=0,ctrO=0,ctrP=0,ctrN=0;
	cin>>n;
	for(long i=0;i<n;i++)
	{
		cin>>x;
		if(x%2==0 && x>0)
		{
			ctrE++;
			ctrP++;
    	}
    	else if(x==0)
    	{
    		ctrE++;
		}
    	else if(x%2!=0 && x>0)
    	{
    		ctrO++;
    		ctrP++;
   		}
   		else if(x%2==0 && x<0)
   		{
   			ctrE++;
   			ctrN++;
		}
		else if(x%2!=0 && x<0)
		{
			ctrO++;
			ctrN++;
		}
	}
	cout<<"Even: "<<ctrE<<endl;
	cout<<"Odd: "<<ctrO<<endl;
	cout<<"Positive: "<<ctrP<<endl;
	cout<<"Negative: "<<ctrN;
return 0;
}
