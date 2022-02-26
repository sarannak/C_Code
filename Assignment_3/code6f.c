/*Pragoram to evaluate sum of series 1+(1+2)+(1+2+3)+...n terms*/

#include<stdio.h>

int main()
{
	int n,i,j;long sum=0;         //Initialization
	
	printf("Enter value of n: ");    //Declaration
	scanf("%d",&n);          //Input
	
	for(i=1;i<=n;i++)        //Loop to calculate sum
	{
		for(j=1;j<=i;j++)    //Loop inside 1st loop to calculate sum 
		{
			sum+=j;
		}
	}
	printf("%ld",sum);
	return 0;
}
