#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	FILE *source_fptr,*target_fptr;char c;
	
	if(argc!=3)
	{
		printf("Insufficient Arguments!!!\n");
		exit(0);
	}
	
	source_fptr=fopen(argv[1],"r");
	target_fptr=fopen(argv[2],"w+");
	
	if(source_fptr==NULL||target_fptr==NULL)
	{
		printf("No Source/Target file!!!\n");
		exit(0);
	}
	
	printf("Copying \"%s\" to \"%s\"..... \n",argv[1],argv[2]);
	while((c=getc(source_fptr))!=EOF)
	{
		putc(c,target_fptr);
	}
	
	printf("\nCopy completed\n");
	fclose(source_fptr);
	fclose(target_fptr);
}
