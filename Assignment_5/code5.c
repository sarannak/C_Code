/*C program to find length of string without string.h*/

#include<stdio.h>

int main()
{
	char s[100];int i;     //Declaration
	
	printf("Enter a string:\n");
	scanf(" %[^\n]s",s);         //Input string
	
	for(i=0;s[i]!='\0';i++);       //Loop to count characters in string
	    
	printf("\nLength of Given String is: %d",i);  //Output
	
	return 0;
}                     //End of program
