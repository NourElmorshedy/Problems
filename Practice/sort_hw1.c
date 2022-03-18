#include<stdio.h>
int main()
{
	int c,t,a[5],i,j,temp,k;
	printf("Enter the array: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a number:");
	scanf("%d",&t);
	//printf("The sorted array is: ");
	for(c=0;c<5;c++)
	{
		for(k=0;k<5-c-1;k++)
		{
			if(a[k]>a[k+1])
			{
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	}
	printf("The place of the number is: "); 
	for(j=0;j<5;j++)
	{
		if(t==a[j])
		{
			printf("%d ",j);
		}
}
}

