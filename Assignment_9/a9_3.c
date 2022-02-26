/*C program to count no. of lines,words
  and characters in a given file*/

#include<stdio.h>      //Preprocessor directive

int main()
{
    FILE *fp;char ch;            //Declaration
    int lines=0,words=0,chr=0;   //Initialization

    fp=fopen("a.txt","r");     //Opening given file

    printf("Reading a.txt .......\n");

    while((ch=getc(fp))!=EOF)   //Loop to read file
    {
        if(ch==' '||ch=='\n')
        {
            words++;         //count words
            if(ch=='\n')
                lines++;    //count lines
        }
        else
            chr++;         //count characters
    }

    fclose(fp);   //closing file

    printf("Lines = %d , Words = %d , ",lines,words);
                                       //Output
    printf("Characters = %d\n",chr);

    return 0;
}           //End of program
