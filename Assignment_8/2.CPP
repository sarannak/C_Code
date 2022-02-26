/*C program to implement a structure student (sid, sname,
mark[5], total). Create an array of five students and print student
detail with total marks*/

#include<stdio.h>

struct student      //Defining student
{
	int sid;               //Data members
	char sname[20];
	int mark[5];
	int total;
};              //End of definition

int main()
{
	int i,j;struct student s[5];    //Declaration
	
	printf("Enter details of 5 students:\n");
	for(i=0;i<5;i++)             //Loop to input details
	{
		printf("Enter details of student %d:\n",i+1);
		printf("ID: ");
		scanf("%d",&s[i].sid);  //Input id
		printf("Name: ");
		scanf(" %[^\n]s",s[i].sname);       //Input name
		printf("Enter marks in 5 subjects:\n");
		for(j=0;j<5;j++)              //Loop to input 5 marks
		    scanf("%d",&s[i].mark[j]);
	}
	
	for(i=0;i<5;i++)                //Loop to calculate total
	{
		s[i].total=0;       //Initialization of data member total
		for(j=0;j<5;j++)
		    s[i].total+=s[i].mark[j];
	}
	
	printf("\nPrinting details........\n");
	for(i=0;i<5;i++)               //loop to output details
	{
		printf("Details of student %d:\n",i+1);
		printf("ID: %d\n",s[i].sid);      //Output id
		printf("Name: %s\n",s[i].sname);    //Ouput name
		printf("Total: %d\n",s[i].total);        //Output total
	}
	
	return 0;
	
}                //End of program
