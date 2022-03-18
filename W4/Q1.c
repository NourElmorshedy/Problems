#include<stdio.h>
//Given a integer X, find all numbers divisible by 3 from 1 to X.
int main()
{
	int x,i;
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		if(i%3==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
