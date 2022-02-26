/*C program to check whether matrix is symmetric or not*/

#include<stdio.h>    

int main()
{
	int m,i,j,flag=0;          //Declaration
	
	printf("Enter no. of rows:\n");  
	scanf("%d",&m);     //input rows and columns
	
	int a[m][m],b[m][m];
	
	printf("Enter elements of Matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)        //input elements of matrix
		{
			printf("a%d%d=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Given Matirx:-\n");   //printing given matrix
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("   %d",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<m;i++)    //Transpose matrix
	{
		for(j=0;j<m;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	
	for(i=0;i<m;i++)    //Checking
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]!=b[i][j])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		    break;
	}
	
		if(flag==0)
		    printf("\nMatrix is Symmetric\n");       //Output
		else
		    printf("\nMatrix is not Symmetric\n");
		    
	return 0;
	
}                    //End of program
