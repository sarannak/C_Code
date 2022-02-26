/*Program to check whether a given no. is Prime or not*/

#include<stdio.h>      //Preprocessor Directive

int main()
{
	int n,i;          //Initialization
	
	printf("Enter an integer: ");       //Declaration
	scanf("%d",&n);         //Input
	
	for(i=2;i<=n/2;i++)             //Checking if n is divisible by any integer between 2 to n/2
	{
		if(n%i==0)
		{
			printf("%d is not prime.\n",n);      //if it divisible Output - not prime
			break;                 //break out of loop
		}
		else if(i==n/2)
		    printf("%d is prime.\n",n);       //if not divisible Output - Prime
	}
	return 0;
}
