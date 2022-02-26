/*C program to dislay the frequency of each
  alphabetic character in a given disk file*/

#include<stdio.h>          //Preprocessor Directive
#include<stdlib.h>

int main()
{
    FILE *fp;char ch;int i,count[256]={0};   //Declaration

    fp=fopen("a.txt","r");          //Opening file

    if(fp==NULL)            //Check if file exists or not
    {
        printf("File does not exist\n");
        exit(0);
    }

    while((ch=getc(fp))!=EOF)      //Loop to count characters
        count[ch]++;

    for(i=0;i<256;i++)           //Loop to print counts
    {
        if(count[i]!=0)
            printf("%c = %d\n",i,count[i]);       //Output
    }

    fclose(fp);        //Closing file

    return 0;
}            //End of program
