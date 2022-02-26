/*C program to copy one string to another without string.h*/

#include<stdio.h>

int main()
{
	char s1[100],s2[100];int i;     //Declaration
	
	printf("Enter a string:\n");
	scanf(" %[^\n]s",s1);         //Input string
	
	for(i=0;s1[i]!='\0';i++)    //Loop to copy each character
	    s2[i]=s1[i];
	    
	s2[i]='\0';        //Assigning null character to end of copied string
	
	printf("\nCopied String:%s\n",s2);    //Output
	
	return 0;
}               //End of program
