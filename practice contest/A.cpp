#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char x[100],temp;
	cin>>x;
	if(strlen(x)>2)
	{
		for(int i=0;i<strlen(x)-2;i++)
	{
		for(int j=i+2;j<strlen(x);j++){
			if(x[i]>x[j])
		{
			temp=x[i];
			x[i]=x[j];
			x[j]=temp;
		    
		}
		j++;
		}
		i++;
		
	
	}
	cout<<x;
	}
	else 
	cout<<x;
	
}
