/* C program to read a file name and a line
   of text as command line arguments*/

#include<stdio.h>        //Preprocessor Directive
#include<stdlib.h>

int main(int argc,char *argv[])
{
    FILE *fp;char ch; //Declaration

    if(argc!=3)   //Checking no. of arguments
    {
        printf("Insufficient Arguments!!!!\n");
        exit(0);
    }

    fp=fopen(argv[1],"w+");   //Opening target file in write mode

    if(fp==NULL)      //Checking if target file exists
    {
        printf("\"%s\" does not exist\n",argv[1]);
        exit(0);
    }

    printf("Writing \"%s\" to \"%s\.......\n",argv[2],argv[1]);
                                                  //Output

    fprintf(fp,"%s",argv[2]);    //Writing to file

    fclose(fp);         //closing file

    return 0;

}          //End of program
