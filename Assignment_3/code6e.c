/*Program to find sum of series 1^1+2^2+3^3+....n terms*/

#include<stdio.h>
#include<math.h>

int main()
{
	int n,i;long sum=0;        //Initialization
	
	printf("Enter value of n: ");       //Declaration
	scanf("%d",&n);       //Input
	
	for(i=1;i<=n;i++)      //Loop to calculate sum
	{
		sum+=pow(i,i);
		if(i!=n)
		    printf("%d^%d+",i,i);
		else
		    printf("%d^%d=",i,i);
	}
	printf("%ld\n",sum);   //Output
	return 0;
} 
