#include<stdio.h>
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	if(x>y && x>z)
	{
		printf("%d",x);
	}
	else if(x>y && x<z)
	{
		printf("%d",z);
	}
	
	else
	printf("%d",y);
	return 0;
}
