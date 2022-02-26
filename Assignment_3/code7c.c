/*Program to generate given triangle*/

#include<stdio.h>     //Preprocessor Directive

int main()
{
	int n,i,j;    //Initialization
	
	printf("Enter no. of rows: ");   //Declaration
	scanf("%d",&n);     //Input
	
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		    printf("%d ",j);   //Loop to print decreasing values 
		printf("\n");    //Next line
	}
	return 0;
}
