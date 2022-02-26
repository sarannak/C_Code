/*Program to generate given triangle*/

#include<stdio.h>     //Preprocessor Directive

int main()
{
	int n,i,j,k;         //Initialization
	
	printf("Enter no. of rows: ");    //Declaration
	scanf("%d",&n);     //Input
	
	for(i=1;i<n;i++)    //Loop to print rows
	{
		if(i%2==0)     //if row is odd start from 0
		    k=0;
		else
		    k=1;
		for(j=1;j<=i;j++)  //Loop to print alternate 0 and 1
		{
			printf("%d",k);
			if(k==0)
			    k=1;
			else
			    k=0;
		}
		printf("\n");    //Next line
	}
	return 0;
}
