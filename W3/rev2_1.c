#include<stdio.h>
//Read N numbers from the user and print their sum, number of even and odd numbers
int main()
{
	int n,i,x,sum=0,ctrE=0,ctrO=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		sum=sum+x;
		if(x%2==0)
		ctrE++;
		else if(x%2!=0)
		ctrO++;
		
		
	}
	printf("%d\n%d\n%d",sum,ctrE,ctrO);
	return 0;
}

































