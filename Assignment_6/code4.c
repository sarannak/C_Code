/*C program to find GCD using recursion*/

#include<stdio.h>   //Preprocessor directive

int gcd(int a,int b)   //Defining gcd
{
	{
		if(a%b==0)        //Base case
		    return b;
		else
		    gcd(b,a%b);    //Calling itself
	}
}     //End of gcd

int main()   
{
	int a,b;    //Initialization
	
	printf("Enter 2 integers:\n");
	scanf("%d%d",&a,&b);       //Input
	
	printf("GCD of %d and %d = %d\n",a,b,gcd(a,b));  //Output
	//Calling gcd and passing a,b
	
	return 0;
}      //End of main
