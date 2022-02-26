/*C program to find factorial using recursion*/

#include<stdio.h>    //Preprocessor directive

long fact(int n)     //Defining fact
{
	if(n==0)
	    return 1;       //Base case
	else
	    return(n*fact(n-1));   //calculate factorial
}    //End of fact

int main()
{
	int n;    //Initialization
	
	printf("Enter an integer: ");
	scanf("%d",&n);     //input 
	
	printf("%d!=%ld\n",n,fact(n));    //Output ,calling factorial
	
	return 0;
}     //End of main

