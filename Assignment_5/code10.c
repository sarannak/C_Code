/*C Program to check 1st occurance of substring in
  a given string*/
  
#include<stdio.h>     //Preprocessor Directive

int main()
{
	char s1[100],s2[50];int i,j,k;   //Declaration
	
	printf("Enter a String: ");
	scanf(" %[^\n]s",s1);      //Input String
	
	printf("Enter substring: ");
	scanf(" %[^\n]s",s2);     //Input Substring
	
	for(i=0;s1[i]!='\0';i++)     //Loop to iterate over string
	{
		if(s1[i]==s2[0])
		{
			for(k=i+1,j=1;s2[j]!='\0';j++,k++)  //Comparing Substring
			{
				if(s1[k]!=s2[j])
				    break;
			}
		}
		if(s2[j]=='\0')
		    break;
	}
	
	if(s2[j]=='\0')
	    printf("Substring Occurs at position %d\n",i+1);   //Output
	else
	    printf("Substring does not occur\n");    //Output
	    
	return 0;
	
}       //End of program
