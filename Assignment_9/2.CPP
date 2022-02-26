#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	FILE *fp;
	
	if(argc!=3)
	{
		printf("Insufficient Arguments\n");
		exit(0);
	}
	
	fp=fopen(argv[1],"w+");
	
	if(fp==NULL)
	{
		printf("File does not exit\n");
		exit(0);
	}
	
	fprintf(fp,"%s",argv[2]);
	
	printf("Write Completed.....\n");
	
	fclose(fp);
	
	return 0;
}
