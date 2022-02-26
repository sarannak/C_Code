/*Program to check whether a no. is postive or
negative or zero using switch statement*/

#include<stdio.h>    //Preprocessor directive

int main()
{
	int n,k;      //Initialization
	
	printf("Enter an integer: ");     //Declaration
	scanf("%d",&n);       //Input
		         
	switch(n)        //switch statement
	{
		case 0:printf("Given number is zero\n");       //Output
		       break;
		default:{
			     k=(n>0);
			     
			     switch(k)
			     {
				  case 1:printf("Given number is positive\n");  //Output
					        break;
				  default:printf("Given number is negative\n"); //Output	     	
				 }    //End of inner switch
			     
		        }
	}     //End of outer switch
	return 0;	    
}        //End of program
