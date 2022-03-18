#include<stdio.h>
int main()
{
	int ar[20],n,i,sum=0,avrg;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
		sum+=ar[i];
    }
    for(i=0;i<n;i++)
    {
    	avrg=sum/n;
		if(ar[i]>avrg)
		{
			printf("The number %d is above average\n",ar[i]);
		}
	}
		
		
	return 0;
	
}
