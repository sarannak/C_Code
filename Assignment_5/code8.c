/*C program to concatenate 2 strings without string.h*/

#include<stdio.h>    //Preprocessor Directive

int main()         
{
	char s1[100],s2[100];int i,j;   //Declaration
	
	printf("Enter 1st string: ");    
	gets(s1);     //Input 1st string
	printf("Enter 2nd string: ");
	gets(s2);     //Input 2nd string
	
	for(i=0;s1[i]!='\0';i++);     //Loop to increase value of i
	for(j=0;s2[j]!='\0';i++,j++)   //Loop to copy s2 in s1
	{
		s1[i]=s2[j];
	}
	s1[i]='\0';           //Assigning null character at the end
	
	printf("Concatenated string:\"%s\"",s1);      //Output
	
	return 0;
}                    //End of program
