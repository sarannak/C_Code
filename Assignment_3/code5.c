/*Program to check whether a given no. is Krishnamurthy no. or not*/

#include<stdio.h>         //Preprocessor Directive

int factorial(int n)        //Function to find factorial
{
	int i,p=1;
	
	for(i=2;i<=n;i++)
	    p*=i;
	return p;
}
int main()      
{
	int n,temp,sum=0;      //Initialization
	
	printf("Enter an integer: ");    //Declaration
	scanf("%d",&n);     //Input
	
	temp=n;        //Assignment
	
	while(temp!=0)       //Loop to find sum of factorial of digits
	{
		sum+=factorial(temp%10);
		temp/=10;
	}
	
	if(sum==n)
	    printf("%d is a Krishnamurthy no.\n",n);            //if sum is = given no. then output 
	else
	    printf("%d is not a Krishnamurthy no.\n",n);       //else output 
	return 0;
}
