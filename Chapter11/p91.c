#include <stdio.h>

int main()
{
    FILE *infile;
    if ((infile=fopen("clients.txt","r"))==NULL)
    {
        puts("File could not be opened");
    }
    else 
    {
        unsigned int account;
        char name[30];
        double balance;
        printf("%-10s%-13s%s\n","Account","Name","Balance");
        fscanf(infile,"%d%29s%lf",&account,name,&balance);
        while (!feof(infile))
        {
            printf("%-10d%-13s%7.2f\n",account,name,balance);
            fscanf(infile,"%d%29s%lf",&account,name,&balance);
        }
        fclose(infile);
    }
}