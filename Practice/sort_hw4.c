#include<stdio.h>
int main()
{
	int a[5]={4,4,6,3,6};
	int n=5,i,j,k,c;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
				{
					a[k]=a[k+1];
				}
				n--;
			}
		}
	}
	printf("The new array is: ");
	for(c=0;c<n;c++)
	{
		printf("%d ",a[c]);
	}
	printf("The nuber of elements is: %d",n);
}
