#include<stdio.h>
int main()
{
	int n,ar[100],i,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
		if(ar[i]==ar[0])
		{
			c++;
		}
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",ar[i]);
	}
	printf("first element occured %d times",c);
	return 0;
}
