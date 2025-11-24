#include <stdio.h>

int main()
{
    FILE *fPtr;
    if ((fPtr=fopen("clients.txt","w"))==NULL)
    {
       puts("The file could not be opened."); 
    }
    else
    {
        puts("Enter the account,name and balance.");
        puts("Enter EOF to end input");
        unsigned int account;
        char name[30];
        double balance;
        printf("?");
        scanf("%u%29s%lf",&account,name,&balance);
        while (!feof(stdin))
        {
            fprintf(fPtr,"%u %s %.2f\n",account,name,balance);
            printf("?");
            scanf("%u%29s%lf",&account,name,&balance);
        }
    }
    fclose(fPtr);
}