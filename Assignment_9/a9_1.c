/*C program to copy a disk file into another disk file
using command line arguments*/

#include<stdio.h>       //Preprocessor directive
#include<stdlib.h>

int main(int argc,char *argv[])   //Main definition
{
    FILE *source,*target;char ch;   //declaration

    if(argc!=3)         //no. of arguments checking
    {
        printf("Insufficient Arguments!!!!\n");
        exit(0);
    }

    source=fopen(argv[1],"r");     //opening source file in read mode
    target=fopen(argv[2],"w+");    //opening target file in write mode

    if(source==NULL||target==NULL)  //checking if files exist or not
    {
        printf("Source of Target File does not exist\n");
        exit(0);
    }

    printf("Copying.........\n");     //Output

    while((ch=getc(source))!=EOF)   //loop to copy text
        putc(ch,target);

     printf("Copy completed\n");    //Output

    fclose(source);     //closing source file
    fclose(target);     //closing target file

    return 0;        //returning 0 to system
}      //End of Program
