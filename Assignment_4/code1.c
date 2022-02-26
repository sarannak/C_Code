/*C program to find minimum,maximum,average and 2nd minimum of an array*/

#include<stdio.h>      //Preprocessor directive

int main()
{
	float x[50],n,avg,min,min2,max,sum=0;;  //Initialization
	int i,j;
	
	printf("Enter no. of elements: ");
	scanf("%f",&n);                       //Input
	
	printf("Enter %.0f elements:\n",n);
	for(i=0;i<n;i++)
	    scanf("%f",&x[i]);                //Input
	printf("Given Array:-\n");
	for(i=0;i<n;i++)
	    printf("%3.0f",x[i]);
	min=x[0],max=x[0];               //Assignment
	for(i=0;i<n;i++)        //Loop to find sum max and min
	{
		sum+=x[i];
		if(x[i]>max)
		    max=x[i];
		if(x[i]<min)
		    min=x[i];
	}                     //End of loop
	avg=sum/n;
	min2=max;
	for(i=0;i<n;i++)       //Loop to find 2nd min
	{
		if(x[i]<min2&&x[i]!=min)
		    min2=x[i];
	}
	printf("\nAverage=%.2f\n",avg);       //Output
	printf("Maximum=%.0f\n2nd Minimum=%.0f\n",max,min2);      //Output
	return 0;
}                                //End of program
