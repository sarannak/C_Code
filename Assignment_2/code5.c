/*Program to check whether a character is vowel or consonant using switch*/

#include<stdio.h>   //Preprocessor Directive

int main()
{
	char c;      //Initialization
	
	printf("Enter a Character: ");    //Declaration
	scanf("%c",&c);     //Input
	
	switch(c)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':printf("%c is a vowel\n",c);    //Output
		         break;
		default:printf("%c is a consonant\n",c);  //Output
	}
	
	return 0;
}
