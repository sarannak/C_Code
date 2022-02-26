/*Program to find sum upto a given no. starting from 1*/

#include<stdio.h>   //Preprocessor Directive

int main()
{
	int n,i,sum=0;          //Initialization
	
	printf("Enter an integer: ");      //Declaration
	scanf("%d",&n);       //Input
	
	for(i=1;i<=n;i++)     //Loop to find sum upto n 
	{
		sum+=i;
		if(i!=n)
		    printf("%d+",i);     //print value of i
		else
		    printf("%d=",i);     //print value of n
	}
	printf("%d",sum);        //output sum
	
	return 0;
}
