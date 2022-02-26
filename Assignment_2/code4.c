/*Program to calculate electricity bill*/

#include<stdio.h>    //Preprocessor Directive

int main()
{
	float x,bill;      //Initialiation
	
	printf("Enter no. of Units Consumed: ");      //Decalaration
	scanf("%f",&x);        //Input
	
	if(x>=0&&x<=200)           //Condition check and computation
	    bill=0.50*x;
	else if(x>200&&x<=400)
	    bill=100+0.65*(x-200);
	else if(x>400&&x<=600)
	    bill=230+0.80*(x-400);
	else
	    bill=390+1*(x-600);
	
	printf("Bill=Rs.%.2f\n",bill);     //Output
	
	return 0;
}
