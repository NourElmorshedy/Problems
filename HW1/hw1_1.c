#include<stdio.h>
int main()
{
	char x;
	scanf("%c",&x);
	switch(x)
	{
		case 'y': printf("Your request is being processed");break;
		case'n': printf("Thank you anyway for your consideration");break;
		case 'h': printf("Sorry, no help is currently available");break;
		default: printf("Invalid entry;please try again"); 
	}
	return 0;
	 
}

