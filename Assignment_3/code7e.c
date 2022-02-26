/*Program to generate given triangle*/

#include<stdio.h>     //Preprocessor Directive

int main()
{
	int n,i,j,k=1;   //Initialization
	
	printf("Enter no. of rows: ");   //Declaration
	scanf("%d",&n);     //Input
	
	for(i=1;i<=n;i++)   //Loop to print triangle
	{
		if(i>1)
		    k=i-1;
		for(j=1;j<=i;j++)
		    {
		    	printf("%d ",k);  //Output
		    	k++;
			}
		printf("\n");   //Next line
	}
	return 0;
}
