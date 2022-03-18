#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[100], t[100];
	cin>>s>>t;
	int f=0,j=strlen(t)-1;
	for(int i=0;i<strlen(s);i++)
	{
		while(1)
		{
			if(s[i]==t[j])
			{
				f=1;
				break;
			}
			else
			{
				cout<<"NO";
				return 0;
			}
		}
		j--;
	}
	
	if(f==1)
	cout<<"YES";
}
