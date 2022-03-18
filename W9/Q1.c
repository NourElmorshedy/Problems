#include<stdio.h>

int main()
{
	int i,ar[10],even=0,x;
	printf("Enter 10 numbers: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&ar[i]);
		x= func(ar[i]);
		if(x==0)
		even++;
	}
	printf("The number of even numbers is %d",even);
	
}


int func(int n)
{
	int m;
	if(n%2!=0)
	m=1;
	else
	m=0;
	return m;
}
