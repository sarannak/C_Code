#include<stdio.h>

int main()
{
	int i,j,k=4;
	
	for(i='A';i<='E';i++)
	    printf("%c",i);
	for(i='D';i>='A';i--)
	    printf("%c",i);
	printf("\n");
	
	for(i=1;i<=4;i++)
	{
		for(j='A';j<'A'+k;j++)
		    printf("%c",j);
		for(j=1;j<=2*i-1;j++)
		    printf(" ");
		for(j='A';j<'A'+k;j++)
		    printf("%c",j);
		k--;
		printf("\n");
	}
	return 0;
}
