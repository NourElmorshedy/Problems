#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	if(x%2!=0 && y%2!=0)
	{
		printf("%d",x*y);
	}
	else if(x%2==0 && y%2==0)
	{
		printf("%f",x/y);
	}
	else if(x%2!=0 && y%2==0)
	{
		printf("%d",x+y);
	}
	else if (x%2==0 && y%2!=0)
	{
		printf("%d",x-y);
	}
	return 0;
}
