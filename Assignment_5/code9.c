/*C program to Display abbreviated form of a given name*/

#include<stdio.h>      //Preprocessor Directive

int main()
{
	char s1[50],s2[20];int i,j=0,k=-1;  //Declaration and Initialization
	
	printf("Enter a Name: ");
	gets(s1);        //Input Name
	
	for(i=0;s1[i]!='\0';i++)     //Loop to iterate over Name
	{
		if(s1[i]==' ')
		{
			s2[j++]=s1[k+1];     //Assignment
			s2[j++]='.';
			k=i;
		}
	}
	
	for(;s1[k]!='\0';j++,k++)    //Loop to assign last word
	    s2[j]=s1[k];
	
	s2[j]='\0';    //Assigning Null character at the end
	
	printf("Abbreviated Form: %s\n",s2);     //Output
	
	return 0;
}                 //End of Program
