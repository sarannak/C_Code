#include<stdio.h>

int main()
{
	char c;FILE *fp;int i=1;
	
	fp=fopen("n.txt","r");
	
	while((c=getc(fp))!=EOF)
	{
		if(i==1)
		    printf("%d. ",i++);
		printf("%c",c);
		if(c=='\n')
		    printf("%d. ",i++);
	}
	
	getchar();
		
	return 0;
}
