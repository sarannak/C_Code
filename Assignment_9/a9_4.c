/*C program to read a file and display its
  contents along with the line no. before
  each line*/

#include<stdio.h>         //Preprocessor Directive
#include<stdlib.h>

int main()
{
    FILE *fp;int i=1;char ch;     //Declaration

    fp=fopen("d.txt","r");     //Opening file

    if(fp==NULL)      //Check if file exists or not
    {
        printf("File is empty\n");
        exit(0);
    }

    while((ch=getc(fp))!=EOF)      //Loop to read contents of file
    {
        if(i==1)
            printf("%d. ",i++);

        printf("%c",ch);     //Output

        if(ch=='\n')
            printf("%d. ",i++);
    }

    printf("\n");

    fclose(fp);      //Closing file

    return 0;
}            //End of main
