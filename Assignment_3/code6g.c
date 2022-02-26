/*Program to find sum of series x-x3/3!+x5/5!-...n terms*/

#include<stdio.h>

int factorial(int n)      //function to find factorial
{
	int i,p=1;
	
	for(i=2;i<=n;i++)
	    p*=i;
	    
	return p;
}

int main()
{
	int n,i,j=1;float x,sum=0;    //initialization
	
	printf("Enter value of n & x:\n");    //declaration
	scanf("%d%f",&n,&x);     //input
	
	for(i=1;i<=n;i++)   //Loop to find sum
	{
		if(i%2==0&&i>1)
		    sum-=(x*j)/factorial(j);  //Computation
		else
		    sum+=(x*j)/factorial(j);
		j+=2;
	}
	
	printf("Sum=%.2f\n",sum);     //Output
	
	return 0;
}
