#include<iostream>
using namespace std;
int main()
{
	int n,a[1000],c=0,f=0,t=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=n-1;i>0;i--)
	{
		f=0;
		t=0;
		for(int j=i-1;j>=0;j--)
		{
		   if(a[i]>a[j])
		    {
		     f=1;
		      	
			 } 
		   else if(a[i] <= a[j])
		    {
		    	f=0;
		    	break;
			 } 
		}   
		if(f==1)
		{
		 c++; 
		  	
		 } 
		else 
		{
			for(int k=i-1;k>=0;k--)
		{
		   if(a[i]<a[k]) 
		    {
		    	t=1;
		    	 
			 } 
		   else
		    {
		    	t=0;
		    	break;
			 } 
		}   
		if(t==1)
		 c++;   
		}  
	}
	cout<<c;
}
