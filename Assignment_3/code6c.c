/*Pragoram to evaluate sum of series 1+1/2+1/3+...n terms*/

#include<stdio.h>       //Preprocessor Directive

int main()
{
	float n,i,sum=0;          //Initialization
	
	printf("Enter value of n: ");       //Declaration
	scanf("%f",&n);         //Input
	
	for(i=1.0;i<=n;i++)          //Loop to calculate sum
	{
		sum+=1/i;
		if(i!=n)
		    printf("1/%.0f+",i);
		else
		    printf("1/%.0f=",i);
	}
	printf("%.2f\n",sum);   //Output
	return 0;
}
