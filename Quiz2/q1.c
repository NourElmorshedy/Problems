#include<stdio.h>
int main()
{
	int a[100],n,i;
	int f=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	   if(a[i]!=a[n-i-1])
	   f=1;
	   break;
	}
	if(f==1)
	{
		printf("False");
	}
	else
	{
		printf("True");
	}
	return 0;
}
