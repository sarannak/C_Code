/*C program to multiply 2 matrices of order m x n*/

#include<stdio.h>    

int main()
{
	int m1,n1,m2,n2,i,j,k,sum;          //Declaration
	
	printf("Enter no. of rows and columns of Matrix 1:\n");  
	scanf("%d%d",&m1,&n1);     //input rows and columns of Matrix 1
	
	printf("Enter no. of rows and columns of Matrix 2:\n");  
	scanf("%d%d",&m2,&n2);     //input rows and columns of Matrix 2
	
	if(n1==m2)         //Checking if matrices are multipliable or not
	{
		
	int a[m1][n1],b[m2][n2],c[m1][n2];
	
	printf("Enter elements of Matrix 1:\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)        //input elements of matrix 1
		{
			printf("a%d%d=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
    printf("Enter elements of Matrix 2:\n");
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)        //input elements of matrix 2
		{
			printf("b%d%d=",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("Matirx A:-\n");   //printing Matrix 1
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("   %d",a[i][j]);
		}
		printf("\n");
	}
	printf("Matirx B:-\n");   //printing Matrix 2
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("   %d",b[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<m1;i++)         //Multiply
	{
		for(j=0;j<n2;j++)
		{
			sum=0;
			for(k=0;k<n1;k++)
			{
				sum+=a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	
	printf("Matirx AxB:-\n");   //Output result
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("   %d",c[i][j]);
		}
		printf("\n");
	}
	
    }
    else
    {
    	printf("\nMatrices are not multipliable\n");
	}
	
	return 0;
}               //End of Program
