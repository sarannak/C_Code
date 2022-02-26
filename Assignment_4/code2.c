/*C program to implement Linear Search*/

#include <stdio.h>        //Preprocessor Directive
 
int main()
{
  int array[100], search, c, n;         //Initialization
 
  printf("Enter number of elements in array\n");
  scanf("%d", &n);                    //Input
 
  printf("Enter %d integer(s)\n", n);   
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);       //Input
 
  printf("Enter a number to search\n");
  scanf("%d", &search);        //Input
 
  for (c = 0; c < n; c++)        //Loop to Search item
  {
    if (array[c] == search)    /* If required element is found */
    {
      printf("%d is present at location %d.\n", search, c+1);   //Output
      break;
    }
  }                      //End of Loop
  if (c == n)
    printf("%d isn't present in the array.\n", search); //Output
 
  return 0;
}             //End of Program
