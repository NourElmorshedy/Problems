#include<iostream>
#include<string.h>
using namespace std;                //{a, b, c}

int main()
{
	char s[1001{}],x;
	cin>>s;
	int c=0;
	int n=strlen(s);
	
	for(int i=1;i<strlen(s)-1;i+=3)
	{
		if((s[i]>='a') && (s[i]<='z'))
		{
			x=s[i];
			c++;
		}
		
		for(int j=1;j<i;j+=3)
		{
			if((x)==(s[j]))
			{
		    	c--;
			}
		}
	}
	

	
	cout<<c;
}
