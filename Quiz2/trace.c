#include<stdio.h>
int main()
{
	int m,l,i,j;
	scanf("%d",&m);
	l=m*3;
	for(i=m;i>0;i--)
	{
		for(j=0;j<l-2*i;j+=1)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
