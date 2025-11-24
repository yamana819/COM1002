#include <stdio.h>

struct clientData 
{
    unsigned int acctNum;
    char lastName[15];
    char firstName[10];
    double balance;
};

int main()
{
    FILE *infile;
    if ((infile=fopen("accounts.dat","wb"))==NULL)
    {
        puts("File could not be opened.");
    }
    else 
    {
        struct clientData blankClient={0,"","",0.00};
        for (unsigned int i=1;i<=100;i++)
        {
            fwrite(&blankClient,sizeof(struct clientData),1,infile);
        }
        fclose(infile);
    }
}