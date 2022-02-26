/*Program to find factorial of a given integer*/

#include<stdio.h>      //Preprocessor Directive

int main()
{
	int n,i;long fact=1;      //Initialization
	
	printf("Enter an integer: ");    //Declaration
	scanf("%d",&n);        //Input
	
	for(i=2;i<=n;i++)        //Finding Factorial
	    fact*=i;
	    
	printf("\n%d!=%ld\n",n,fact);     //Output
	
	return 0;
}
