#include<stdio.h>
#include <stdlib.h>	
//Write a console game where the user has to guess the correct number
//which is generated randomly by the program. Assume the number is
//between 1 and 10. If the guessed number is less than the correct number,
//print “Try higher”, and if the guessed number is greater than the correct
//number, print “Try lower”. Allow the user to keep entering numbers until
//they guess the correct number and then print “You won”.
//Tip: Use “rand() % 10 +1” to get a random number between 1 and 10.
int main()
{
	int n,r;
	r=rand()%10+1;
	do
	{
		scanf("%d",&n);
		if(n<r)
		printf("Try higher");
		else if(n>r)
		printf("Try lower");
	}
	while(n!=r);
	printf("You won");
    return 0;
}
