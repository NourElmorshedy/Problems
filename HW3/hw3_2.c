#include<stdio.h>
//Given an integer N, find the value of N factorial (N x N-1 x N-2 x ... x 1).
int main()
{
	int i,N,fact=1;
	scanf("%d",&N);
	for(i=N;i>1;i--)
	{
		fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}
