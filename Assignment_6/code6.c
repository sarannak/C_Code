/*C program to reverse a given line of text using recursion*/

#include<stdio.h>    //Preprocessor Directive

void rev()
{
	char ch;     //Declaration
	
	if((ch=getchar())!='\n')
	    rev();     //Recursive Call
	
	putchar(ch);     //Output
	
	return;
}     //End of rev

int main()
{
	printf("Enter a line: ");
	rev();     //Calling rev
	
	return 0;
}       //End of main
