/*C program to implement Binary search*/

#include <stdio.h>     //Preprocessor Directive
 
int main()
{
   int c,first,last,middle,n,search,array[100]; //Initialization
 
   printf("Enter number of elements: ");
   scanf("%d",&n);                  //Input
 
   printf("Enter %d integers in ascending order:\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);         //Input
 
   printf("Enter value to find\n");
   scanf("%d", &search);        //Input
 
   first = 0;             //Assignment
   last = n - 1;
   middle = (first+last)/2;
 
   while (first <= last)         //Loop to perfrom binary search
    {
      if (array[middle] < search)
         first = middle + 1;    
      else if (array[middle] == search)
	   {
         printf("%d found at location %d.\n",search,middle+1);  //Output
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }                          //End of Loop
   if (first > last)           //Checking
      printf("%d isn't present in the list.\n",search);   //Output
 
   return 0;  
}                  //End of Program
