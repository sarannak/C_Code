#include<stdio.h>

int main()
{
	FILE *fp;char c;
	int lines=0,word=0,chr=0;
	
	fp=fopen("n.txt","r");
	
	while((c=getc(fp))!=EOF)
	{
		if(c==' ')
		    word++;
		if(c=='.')
		    word++,lines++;
		if(c!=' ')
		    chr++;
	}
	
	fclose(fp);
	
	printf("Lines = %d,Words = %d,Characters = %d\n",lines,word,chr);
	
	getchar();
	
	return 0;
}
