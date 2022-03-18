#include<stdio.h>
//Given an integer N, followed by N numbers. Find the sum the numbers in
//odd places and the sum of the numbers in even places.
int main()
{
	int N,i,x,sumE=0,sumO=0;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%d",&x);
		if(i%2==0)
		sumE=sumE+x;
		else
		sumO=sumO+x;
	}
	printf("%d %d",sumO,sumE);
	return 0;
}
