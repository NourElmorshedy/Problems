#include<stdio.h>
int GCD(int m, int n);
int main()
{
	int m,n,r;
	printf("Enter two numbers:");
	scanf("%d%d",&m,&n);
	r=GCD(m,n);
	printf("The GCD is %d",r);
}


int GCD(int m, int n)
{
	if(n==0)
	return m;
	else 
	return GCD(n,m%n);
}
