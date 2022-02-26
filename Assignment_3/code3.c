/*Program to check whether an integer is palindrome or not*/

#include<stdio.h>         //Preprocessor Directive

int main()
{
	int n,temp,reverse=0;         //Initialization
	
	printf("Enter an integer: ");   //Declaration
	scanf("%d",&n);       //Input
	
	temp=n;         //Assignment
	
	while(temp!=0)           //Loop to reverse n
	{
		reverse*=10;
		reverse+=temp%10;
		temp/=10;
	}
	
	if(reverse==n)
	    printf("%d is a Palindrome no.\n",n);         //if true Output Palindrome
	else
	    printf("%d is not a Palindrome no.\n",n);   //else Output not Palindrome
	
	return 0;
	
}
