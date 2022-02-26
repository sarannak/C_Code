/*Program to find sum of series 1+4+9+16+....n terms*/

#include<stdio.h>      //Preprocessor Directive

int main()
{
	int n,i;long sum=0;     //Initialization
	
	printf("Enter value of n: ");         //Declaration
	scanf("%d",&n);        //Input
	
	for(i=1;i<=n;i++)         //Loop to calculate sum
	{
		sum+=i*i;
		if(i!=n)
		    printf("%d+",i*i);
		else
		    printf("%d=",i*i);
	}
	printf("%ld\n",sum);    //Output
	
	return 0;
}
