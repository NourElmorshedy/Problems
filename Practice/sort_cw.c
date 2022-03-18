#include<stdio.h>
void read(int a[], int n);
void sort(int a[], int n);
void des(int a[], int n);
void find(int a[],int n);
int main()
{
	int a[10],n,x;
	read(a,n);
	printf("\n");
	sort(a,n);
	printf("\n");
	des(a,n);
	printf("\n");
	find(a,n);
}

void read(int a[], int n)
{
	int i,j;
	n=10;
	printf("Enter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//for(j=0;j<n;j++)
	//{
	//	printf("%d ",a[j]);
	//}
}

void sort(int a[], int n)
{
	int temp,i,j,k;
	n=10;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("The sorted array is:");
	for(k=0;k<n;k++)
	{
		printf("%d ",a[k]);
	}
}

void des(int a[], int n)
{
	int temp,i,j,k;
	n=10;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("The array in descending order is: ");
	for(k=n-1;k>=0;k--)
	{
		printf("%d ",a[k]);
	}
}

void find(int a[],int n)
{
	int f=0,x,k;
	n=10;
	printf("Enter a number: ");
	scanf("%d",&x);
	for(k=0;k<n;k++)
	{
		if(x==a[k])
		{
			printf("The place of the number is: %d",k);
			f=1;
			break;
		}
	}
	if(f==0)
	{
		printf("non");
	}
}










