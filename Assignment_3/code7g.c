/*Program to generate given triangle*/

#include<stdio.h>   //Preprocessor Diretive

int main()       //Declaring main function
{
	int i,j,temp='E',k='D';     //Initialization
	
	for(i=0;i<=4;i++)          //start of outer loop
	{
		for(j='A';j<=temp;j++)     //1st inner loop
		    printf("%c",j);        //output
		temp--;
		for(j=1;j<=2*i-1;j++)       //2nd inner loop
		    printf(" ");            //output
		for(j=k;j>='A';j--)       //3rd inner loop
		    printf("%c",j);       //output
		if(i>0)                //checking
		    k--;
		printf("\n");          //next line
	}                         //End of outer loop
	return 0;                         
}                        //End of program
