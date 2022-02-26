/*C program to interchange the value of two
 variables using call by value*/
 
#include<stdio.h>

void swap(int a,int b)    //Defining Swap
{
	a=a+b;         //Interchange values
	b=a-b;
	a=a-b;
	
	printf("Inside Function a=%d b=%d\n",a,b);

}        //End of swap

int main()      
{
	int a,b;    //Declaration
	
	printf("Enter a and b:\n");
	scanf("%d%d",&a,&b);      //Input
	
	printf("Before swap a=%d b=%d\n",a,b);
	
	swap(a,b);      //Calling swap by value
	
	printf("Outside Function a=%d b=%d\n",a,b);   //Output
	
	return 0;
}             //End of main

