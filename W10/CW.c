#include<stdio.h>
void read(int a[],int n);
void sort(int a[],int n);
void printa(int a[],int n);
void printd(int a[],int n);
void search(int a[],int n,int t);
int main()
{
	int a[100],n,t;
	printf("Enter the target:");
	scanf("%d",&t);
	printf("Enter number of values in the array:");
	scanf("%d",&n);
	read(a,n);
	sort(a,n);
	printa(a,n);
	printd(a,n);
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

void printa(int a[],int n)
{
	int i;
	printf("Ascending order is:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

void printd(int a[],int n)
{
	int i;
	printf("\nDescending order is:");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
}

void search(int a[],int n,int t)
{
	int i,f=0;
	for(i=0;i<n;i++)
	{
		if(t==a[i])
		{
			printf("\n%d",i);
			f=1;
			break;
		}
	}
	if(f==0)
	printf("\nNON");
}














