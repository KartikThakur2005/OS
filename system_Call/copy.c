#include<stdio.h>

//  argc ---> count of argument
// argv  ---> refrence of argument
// fgetc()---> to get character by charcter from file
// EOF ---> end of file
int main(int argc,char *argv[])
{
    FILE *fp1 ,*fp2;

    fp1=fopen(argv[1],"r");
    fp2=fopen(argv[2],"w");

    if (!fp1 || !fp2 || argc!=3)
    {
        //  for checking if there are no null value
        printf("ERROR NULL VALUE");
    }

    char c;

    while ((c=fgetc(fp1))!=EOF)
    {
        fputc(c,fp2);
    }
    
    fclose(fp1);
    fclose(fp2);

            

}