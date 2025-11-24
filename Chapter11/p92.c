#include <stdio.h>

int main()
{   
    FILE *infile;
    unsigned int request;
    unsigned int account;
    char name[30];
    double balance;
    if ((infile=fopen("clients.txt","r"))==0)
    {
        puts("The file could not be opened.");
    }
    else 
    {
        printf("Enter the request:\n(1-Accouns with zero balances\n 2-Accounts with credit balances\n3-Accounts with debit balances\n4-Exit)");
    }
    scanf("%u",&request);
    while (request!=4)
    {
        fscanf(infile,"%u%29s%lf",&account,name,&balance);
        switch (request)
        {
            case 1:
                puts("Account with zero balances:");
                while (!feof(infile))
                {
                    if (balance==0)
                    {
                        printf("%-10d%-13s%7.2f\n",account,name,balance);
                    }
                    fscanf(infile,"%u%29s%lf",&account,name,&balance);
                }
                break;
            case 2:
                puts("\nAccounts wiht credit balances\n");
                while (!feof(infile))
                {
                    if (balance<0)
                    {
                        printf("%-10d%-13s%7.2f\n",account,name,balance);
                    }
                    fscanf(infile,"%u%29s%lf",&account,name,&balance);
                }
                break;
            case 3:
                puts("\nAccounts with debit balances\n");
                while (!feof(infile))
                {
                    if (balance>0)
                    {
                        printf("%-10d%-13s%7.2f\n",account,name,balance);
                    }
                    fscanf(infile,"%u%29s%lf",&account,name,&balance);
                }
                break;

        }
        rewind(infile);
        printf("\n?");
        scanf("%d",&request);
    }
}
