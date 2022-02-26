/*C program to interchange values of two variables using call by address*/

#include<stdio.h>    //Preprocessor Directive

void swap(int *a,int *b)    //Defining swap
{
	*a=*a+*b;       //Interchange values
	*b=*a-*b;
	*a=*a-*b;
}       //End of swap

int main()
{
	int a,b;      //Declaration
	
	printf("Enter a and b:\n");
	scanf("%d%d",&a,&b);   //Input
	
	printf("Before Swap a=%d b=%d\n",a,b);   //Output
	
	swap(&a,&b);        //Calling swap by passing address
	
	printf("After Swap a=%d b=%d\n",a,b);  //Output
	
	return 0;
}            //End of main
