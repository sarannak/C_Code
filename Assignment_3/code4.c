/*Program to check whether an integer is an Armstrong no. or not*/

#include<stdio.h>         //Preprocessor Directive
#include<math.h>

int main()
{
	int n,temp,k=0,sum=0;         //Initialization
	
	printf("Enter an Integer: ");        //Declaration
	scanf("%d",&n);           //Input
	
	temp=n;       //Assignment
	
	while(temp!=0)     //Loop to count digits
	{
		temp/=10;
		k++;
	}
	
	temp=n;        //Assignment
	
	while(temp!=0)         //Loop to find sum of digit^no. of digits
	{
		sum+=pow(temp%10,k);
		temp/=10;
	}
	
	if(sum==n)
	    printf("%d is an Armstorng no.\n",n);    //if true output Armstrong
	else
	    printf("%d is not an Armstrong no.\n",n);  //else output not Armstorng
	    
	return 0;
}
