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
    if ((infile=fopen("accounts.dat","rb"))==NULL)
    {
        puts("File could not be opened.");
    }
    else 
    {
        printf("%-6s%-16s%-11s%10s\n","Acct","Last Name","First Name","Balance");
        while (!feof(infile))
        {
            struct clientData client={0,"","",0.00};
            int result=fread(&client,sizeof(struct clientData),1,infile);
            if (result!=0 && client.acctNum!=0)
            {
                printf("%-6d%-16s%-11s%10.2f\n",client.acctNum,client.firstName,client.lastName,client.balance);
            }
        }
    }
    fclose(infile);
}