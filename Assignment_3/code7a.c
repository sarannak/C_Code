/*Program to generate given triangle*/

#include<stdio.h>      //Preprocessor Directive

int main()
{
	int n,i,j,temp;     //Initialization
	
	printf("Enter no. of rows: ");   //Declaration
	scanf("%d",&n);      //Input
	
	temp=n;      //Assignment
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*temp;j++)  //Loop to print " "
		    printf(" ");
		temp--;
		for(j=1;j<=i;j++)     //Loop to print increasing part
		    printf("%d ",j);
		j--;
		while(--j)          //Loop to print decreasing part
		    printf("%d ",j);
		printf("\n");         //next line
	}
	return 0;
}
