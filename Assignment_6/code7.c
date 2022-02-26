/*C program to calculte power x^y using recursion*/ 

#include<stdio.h>     //Preprocessor Direcitve

long power(int x,int y)     //Defining power
{
	if(y==0)             //Base Case
	    return 1;
	else
	    return(x*power(x,y-1));    //Recursive call
}       //End of power

int main()
{
	int x,y;      //Initialization
	
	printf("Enter x and y:\n");
	scanf("%d%d",&x,&y);   //Input
	
	printf("%d^%d = %ld\n",x,y,power(x,y));  //Calling power
	
	return 0;
}      //End of main
