/* C program to sort array in ascending order using bubble sort*/

#include <stdio.h>    //Preprocessor directive
 
int main()
{
  int array[100], n, c, d, swap;     //Initialization
 
  printf("Enter number of elements: ");
  scanf("%d", &n);              //Input
 
  printf("Enter %d integers:\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);        //Input
 
  for (c = 0 ; c < n - 1; c++)     //Start of outer Loop
  {
    for (d = 0 ; d < n - c - 1; d++)     //Start of inner Loop
    {
      if (array[d] > array[d+1])       //Swapping part
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }                 //End of inner Loop          
  }                 //End of Outer Loop
 
  printf("Sorted list in ascending order:\n");   //Output
 
  for (c = 0; c < n; c++)
     printf("%d\n", array[c]);         //Output
 
  return 0;
}                           //End of Program
