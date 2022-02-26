#include<stdio.h>

int main()
{
	FILE *fp;char c;int i,count[26];
	
	fp=fopen("n.txt","r");
	
	while(!feof(fp))
	{
		c=getc(fp);
		count[c-'a']++;
	}
	
	fclose(fp);
	
	for(i=0;i<26;i++)
	    printf("%c = %d times\n",'a'+i,count[i]);
		
	return 0;	
	
}
