/*Program to check whether a given is leap year or not*/

#include<stdio.h>  //Preprocessor Directive

int main()
{
	int year;    //initialization
	
	printf("Enter a year: ");    //declaration
	scanf("%d",&year);           //input
	
	if((year%400==0)||(year%4==0&&year%100!=0))
	    printf("%d is a Leap Year.\n",year);          //if true output leap year
	else
	    printf("%d is not a leap year.\n",year);     //if false output not a leap year
	
	return 0;
}
