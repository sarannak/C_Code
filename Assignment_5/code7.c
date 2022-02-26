/*C Program to compare 2 strings without string.h*/

#include<stdio.h>   //Preprocessor Directive

int main()
{
	char s1[100],s2[100];int i;     //Initialization
	
	printf("Enter 1st string: ");
	gets(s1);       //Input 1st String
	printf("Enter 2nd string: ");
	gets(s2);       //Input 2nd string
	
	for(i=0;s1[i]==s2[i]&&s1[i]!='\0';i++);  //Loop to compare values
	
	if(s1[i]>s2[i])
	    printf("1st String is greater\nDifference=%d\n",s1[i]-s2[i]);   
	else if(s1[i]<s2[i])
	         printf("2nd String is greater\nDifference=%d\n",s1[i]-s2[i]);  
	        else
	            printf("Strings are equal\n");
	            
	return 0;	
}             //End of program
