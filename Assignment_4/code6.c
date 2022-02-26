/*C Program to delete duplicate elements*/

#include<stdio.h>

int main()             //Declaring main function
{
    int size,i,j,k;        //Initialization

    printf("Enter no. of elements: ");
    scanf("%d",&size);   //Input size of array

    int x[size]; //Declaring array of given size

    printf("Enter %d elements:\n",size);
    for(i=0;i<size;i++)
        scanf("%d",&x[i]);        //Input elements of array

    printf("Given List:-\n");
    for(i=0;i<size;i++)
        printf("   %d",x[i]);        //Printing given array

    for(i=0;i<size-1;i++)
    {                             //start of outer loop
        for(j=i+1;j<size;)
        {                        //start of inner loop
            if(x[i]==x[j])
            {
                for(k=j;k<size-1;k++)     //Loop to delete elements
                {
                    x[k]=x[k+1];
                }
                size--;           //Reducing size of array
            }
            else
            {
                j++;
            }
        }                      //End of inner loop
    }                        //End of outer loop

    printf("\nAfter Deleting Duplicate Elements:-\n");
    for(i=0;i<size;i++)
        printf("   %d",x[i]);        //Printing modified array

    printf("\n");

    return 0;
}                        //End of program
