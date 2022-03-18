#include<stdio.h>
//Write a C program to take number from user and check if the number
//is palindrome or not using loop.
int main()
{
	int n,r,r1;
	scanf("%d",&n);
	r1=n%10;
	n=n/10;
	while(n>0)
	{
		r=n%10;
		n=n/10;
	}
	if(r1==r)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
	return 0;
}
