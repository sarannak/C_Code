/*C program to to sort a number of strings in alphabetical
order using dynamic memory allocation*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n,i,j;          //Declaration
	
	printf("Enter no. of names: ");
	scanf("%d",&n);           //Input no. of names
	
	char *s[n],*temp;       //Declaraion
	
	for(i=0;i<n;i++)          //Loop for Memory allocation
	    s[i]=(char*)malloc(20*sizeof(char));
	temp=(char*)malloc(20*sizeof(char));    //Memory allocation
	
	printf("Enter %d names:\n",n);
	for(i=0;i<n;i++)
	    scanf(" %[^\n]s",s[i]);    //Input names
	    
	for(i=0;i<n-1;i++)         //Sorting names using selection sort
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(s[j],s[i])<0)
			{
				strcpy(temp,s[j]);
				strcpy(s[j],s[i]);
				strcpy(s[i],temp);
			}
		}
	}
	
	printf("Sorted List:-\n");
	for(i=0;i<n;i++)
	    printf("%s\n",s[i]);    //Output Names
	    
	return 0;
	
}            //End of program
