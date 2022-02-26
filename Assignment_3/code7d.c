/*Program to generate given triangle*/

#include<stdio.h>     //Preprocessor Directive

int main()
{
	int n,i,j,k=1;   //Initialization
	
	printf("Enter no. of rows: ");   //Declaration
	scanf("%d",&n);     //Input
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			if(k==9)
			    k=1;
			else
			    k++;
		}
		printf("\n");
	}
	return 0;
}
