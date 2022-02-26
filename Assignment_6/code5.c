/*C program to display fibonacci of n numbers using recursion*/ 

#include<stdio.h>    //Preprocessor Directive

int fib(int n)      //Defining fib
{
	if(n==0)
	    return 0;	
	else if(n==1||n==2)
	    return 1;    //Base case
	else
	    return(fib(n-1)+fib(n-2));   //Recursive call
}      //End of fib

int main()
{
	int n,i;     //Initialization
	
	printf("Enter value of n: ");
	scanf("%d",&n);     //Input
	
	for(i=0;i<=n;i++)
	    printf("%d ",fib(i));    //Output
	    
	return 0;
}       //End of main
