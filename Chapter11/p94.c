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
    if ((infile=fopen("accounts.dat","rb+"))==0)
    {
        puts("File could not be opened");
    }
    else 
    {
        struct clientData client={0,"","",0.00};
        printf("Enter account number 1-100 0 to end input:");
        scanf("%u",&client.acctNum);
        while (client.acctNum!=0)
        {
            printf("Enter last name first name balance:");
            scanf("%14s%9s%lf",client.lastName,client.firstName,&client.balance);
            fseek(infile,(client.acctNum-1)*sizeof(struct clientData),SEEK_SET);
            fwrite(&client,sizeof(struct clientData),1,infile);
            printf("Enter the account number:");
            scanf("%u",&client.acctNum);
        }
    }
}