/*Program to find Maximumm fo three numbers*/

#include<stdio.h>      //Preprocessor Directive

int main()
{
	int a,b,c,big;        //Initialiation
	
	printf("Enter three integers:\n");   //Decalaration
	scanf("%d%d%d",&a,&b,&c);     //Input
	
	big=(a>b)?a:b;         //Computation
	big=(big>c)?big:c;
	
	printf("Largest of 3 no. is %d\n",big);     //Output
	
	return 0;
}
