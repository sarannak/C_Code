/*C program to Transpose matrix of order m x n*/

#include<stdio.h>    

int main()
{
	int m,n,i,j;          //Declaration
	
	printf("Enter no. of rows and cloumns:\n");  
	scanf("%d%d",&m,&n);     //input rows and columns
	
	int a[m][n],b[n][m];
	
	printf("Enter elements of Matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)        //input elements of matrix
		{
			printf("a%d%d=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Given Matirx:-\n");   //printing given matrix
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("   %d",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<m;i++)    //Transpose matrix
	{
		for(j=0;j<n;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	
	printf("\nTranspose of given matrix:-\n");   //Output
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("   %d",b[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}                   //End of program
