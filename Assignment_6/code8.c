/*C program to solve tower of hanoi problem*/

#include<stdio.h>

void tower(int n,char fr,char to,char spare)  //Defining tower
{
	if(n==1)            //Base case
	{
		printf("Move from %c to %c\n",fr,to);  //Output
		return;
	}
	else
	    tower(n-1,fr,spare,to);    //Moving from from to spare
		tower(1,fr,to,spare);      //Moving from from to to
		tower(n-1,spare,to,fr);	   //Moving from spare to to 
}             //End of tower

int main()
{
	int n;            //Declaration
	
	printf("There are 3 rods A,B,C\nMoving from A to B\n");
	printf("Enter no. of stacks: ");
	scanf("%d",&n);         //input
	
	tower(n,'A','B','C');       //Calling tower
	
	return 0;
}            //End of main
