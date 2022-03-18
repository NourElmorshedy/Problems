#include<stdio.h>
void read(int a[],int n);
void search(int a[],int n,int t);
void sort(int a[],int n);
int main()
{
	int a[100],n,t;
	printf("Enter the target:");
	scanf("%d",&t);
	printf("Enter the value of numbers in the array:");
	scanf("%d",&n);
	read(a,n);
	search(a,n,t);
	sort(a,n);
	search(a,n,t);
}

void read(int a[],int n)
{
	int i;
	printf("Enter the numbers of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}

void search(int a[],int n,int t)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(t==a[i])
		{
			printf("\n%d ",i);
		}
	}
}

void sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-j;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
