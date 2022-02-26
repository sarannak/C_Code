/*C program to create one dimensional array using
dynamic memory allocation and find the smallest and largest
element in the array using a function findminmax()*/

#include<stdio.h>
#include<stdlib.h>

void findminmax(int *a,int n,int *max,int *min)   //Function definition
{
	int i;     //Declaration
	
	*max=*a;*min=*a;    //Assignment
	
	for(i=0;i<n;i++)    //Loop to find min and max
	{
		if(*(a+i)>*max)
		    *max=*(a+i);
		if(*(a+i)<*min)
		    *min=*(a+i);
	}
}                  //End of function

int main()
{
	int n,max,min,i,*a;        //Declaration
	
	printf("Enter no. of elements: ");
	scanf("%d",&n);             //Input size of array
	
	a=(int*)malloc(5*sizeof(int));        //Allocation memory
	
	printf("Enter %d integers:\n",n);
	for(i=0;i<n;i++)
	    scanf("%d",(a+i));       //Input array elements
	    
	findminmax(a,n,&max,&min);     //Function call
	
	printf("Largest = %d , Smallest = %d",max,min);    //Output
	
	return 0;
}                 //End of main
