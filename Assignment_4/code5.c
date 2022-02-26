/*C Program to Implement Selection Sort*/

#include<stdio.h>       //Preprocessor Directive

int main()              //Declaring main function
{
    int n,i,j,temp;       //Initialization

    printf("Enter no. of elements: ");
    scanf("%d",&n);            //Input size of array

    int x[n];              //Declaring array of size n

    printf("Enter %d integers:\n",n);
    for(i=0;i<n;i++)                 //Loop to input elements of array
        scanf("%d",&x[i]);

    printf("Given List:-\n");
    for(i=0;i<n;i++)           //Printing given array
        printf("   %d",x[i]);

    for(i=0;i<n-1;i++)
    {                           //start of outer loop
        for(j=i+1;j<n;j++)      //start of inner loop
        {
            if(x[j]<x[i])      //if true swap values
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }                      //End of inner loop
    }                          //End of outer loop

    printf("\nGiven List in Ascending Order:-\n");
    for(i=0;i<n;i++)           //Printing sorted array
        printf("   %d",x[i]);

    printf("\n");

    return 0;
}                       //End of Program
