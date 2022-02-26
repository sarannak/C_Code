/*Program to find sum of series 1!+2!+3!+....n terms*/

#include<stdio.h>         //Preprocessor Directive

int factorial(int n)       //Function to calculate factorial
{
	int i,p=1;
	
	for(i=2;i<=n;i++)
	    p*=i;
	return p;
}
int main()
{
	int n,i;long sum=0;        //Initialization
	
	printf("Enter value of n: ");       //Declaration
	scanf("%d",&n);       //Input
	
	for(i=1;i<=n;i++)      //Loop to calculate sum
	{
		sum+=factorial(i);
		if(i!=n)
		    printf("%d!+",i);
		else
		    printf("%d!=",i);
	}
	printf("%ld\n",sum);      //Output
	return 0;
}
