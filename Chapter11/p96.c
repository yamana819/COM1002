#include <stdio.h>

struct clientData
{
    unsigned int acctNum;
    char lastName[15];
    char firstName[10];
    double balance;
};

unsigned int enterChoice(void);
void textFile(FILE *infile);
void updateRecord(FILE *infile);
void newRecord(FILE *infile);
void deleteRecord(FILE *infile);

int main()
{
    FILE *infile;
    if ((infile=fopen("accounts.dat","rb+"))==NULL)
    {
        puts("File could not be opened.");
    }
    else 
    {
        unsigned int choice;
        while ((choice=enterChoice())!=5)
        {
            switch (choice)
            {
                case 1:
                    textFile(infile);
                    break;
                case 2:
                    updateRecord(infile);
                    break;
                case 3:
                    newRecord(infile);
                    break;
                case 4:
                    deleteRecord(infile);
                    break;
                default:
                    puts("Incorrect choice.");
                    break;
            }
        }
   }
   fclose(infile);
}

void textFile(FILE *infile)
{
    FILE *writePtr;
    if ((writePtr=fopen("accounts.txt","w"))==NULL)
    {
        puts("File could not be opened.");
    }
    else 
    {
        rewind(infile);
        fprintf(writePtr,"%-6s%-16s%-11s%10s\n","Acct","Last Name","First Name","Balance");
        while (!feof(infile))
        {
            struct clientData client={0,"","",0.00};
            int result=fread(&client,sizeof(struct clientData),1,infile);
            if (result!=0 && client.acctNum!=0)
            {
                fprintf(writePtr,"%-6d%-16s%-11s%10.2f\n",client.acctNum,client.lastName,client.firstName,client.balance);
            }
        }
    }
    fclose(writePtr);
}

void updateRecord(FILE *infile)
{
    puts("Enter account to update (1-100):");
    unsigned int account;
    scanf("%d",&account);
    fseek(infile,(account-1)*sizeof(struct clientData),SEEK_SET);
    struct clientData client={0,"","",0.0};
    fread(&client,sizeof(struct clientData),1,infile);
    if (client.acctNum==0)
    {
        printf("Account %d has no information.\n",account);
    }
    else 
    {
        printf("%-6d%-16s%-11s%10.2f\n\n",client.acctNum,client.lastName,client.firstName,client.balance);
        printf("Enter charge (+) or payment (-):");
        double update;
        scanf("%lf",&update);
        client.balance+=update;
        printf("%-6d%-16s%-11s%10.2f\n",client.acctNum,client.lastName,client.firstName,client.balance);
        fseek(infile,(account-1)*sizeof(struct clientData),SEEK_SET);
        fwrite(&client,sizeof(struct clientData),1,infile);
    }
}

void deleteRecord(FILE *infile)
{
    puts("Enter the account number (1-100):");
    unsigned int account;
    scanf("%d",&account);
    fseek(infile,(account-1)*sizeof(struct clientData),SEEK_SET);
    struct clientData client;
    fread(&client,sizeof(struct clientData),1,infile);
    if (client.acctNum==0)
    {
        printf("Accont %d does not exist.\n",account);
    }
    else 
    {
        fseek(infile,(account-1)*sizeof(struct clientData),SEEK_SET);
        struct clientData blankClient={0,"","",0.00};
        fwrite(&blankClient,sizeof(struct clientData),1,infile);
    }
}

void newRecord(FILE *infile)
{
    puts("Enter the account number (1-100):");
    unsigned int account;
    scanf("%d",&account);
    fseek(infile,(account-1)*sizeof(struct clientData),SEEK_SET);
    struct clientData client={0,"","",0.00};
    fread(&client,sizeof(struct clientData),1,infile);
    if (client.acctNum!=0)
    {
        printf("The account %d already contains information.\n",client.acctNum);
    }
    else 
    {
        puts("Enter last name first name balance:");
        scanf("%14s%19s%lf",client.lastName,client.firstName,&client.balance);
        client.acctNum=account;
        fseek(infile,(account-1)*sizeof(struct clientData),SEEK_SET);
        fwrite(&client,sizeof(struct clientData),1,infile);
    }
}

unsigned int enterChoice(void)
{
    puts("Enter your choice\n1-Store text file of accounts\n2-Update an account\n3-Add a new account\n4-Delete an account\n5-End program:");
    unsigned int choice;
    scanf("%d",&choice);
    return choice;
}