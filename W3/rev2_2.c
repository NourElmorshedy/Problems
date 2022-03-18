#include<stdio.h>
//Write a program that reads 2 numbers from the user (x and y), then calculates x^y

int main()
{
	int x,y,i,res=1;
	scanf("%d%d",&x,&y);
	for(i=0;i<y;i++)
	{
		res=res*x;
	}
	printf("%d",res);
	return 0;
}

























