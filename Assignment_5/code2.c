/*C program to add 2 matrices of order m x n*/

#include<stdio.h>    

int main()
{
	int m,n,i,j;          //Declaration
	
	printf("Enter no. of rows and cloumns:\n");  
	scanf("%d%d",&m,&n);     //input rows and columns
	
	int a[m][n],b[m][n],c[m][n];
	
	printf("Enter elements of Matrix 1:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)        //input elements of matrix 1
		{
			printf("a%d%d=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
    printf("Enter elements of Matrix 2:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)        //input elements of matrix 2
		{
			printf("b%d%d=",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("Matirx A:-\n");   //printing Matrix 1
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("   %d",a[i][j]);
		}
		printf("\n");
	}
	printf("Matirx B:-\n");   //printing Matrix 2
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("   %d",b[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<m;i++)      //Sum 
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("Sum:-\n");   //printing Sum
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("   %d",c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}              //End of program
	
