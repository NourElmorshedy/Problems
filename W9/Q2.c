#include<stdio.h>
void div(int n);
int main()
{
	int x;
	scanf("%d",&x);
	div(x);
	
}

void div(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("%d ",i);
	}
	
}
