#include <stdio.h>

struct Rental
{
    char name[30];
    int days;
    double fee;
};

void getInput(struct Rental customers[],size_t length);
void printOutput(struct Rental customers[],size_t length);

int main()
{
    struct Rental customers[3];
    getInput(customers,3);
    printOutput(customers,3);
}

void getInput(struct Rental customers[],size_t length)
{
    for (size_t i=0;i<length;i++)
    {
        printf("Enter customer name:");
        scanf("%29s",customers[i].name);
        printf("Rental duration (in days):");
        scanf("%d",&customers[i].days);
        printf("Enter daily rental fee:");
        scanf("%lf",&customers[i].fee);
    }
    puts("");
}

void printOutput(struct Rental customers[],size_t length)
{
    double max=0;
    char *str;
    for (size_t i=0;i<length;i++)
    {
        printf("Customer:%s\n",customers[i].name);
        printf("Rental duration:%d\n",customers[i].days);
        printf("Total cost:%.2f\n",(double) customers[i].days*customers[i].fee);
        if (customers[i].days>7)
        {
            double discount=(double) ((customers[i].days*customers[i].fee)/10);
            printf("Discount applied:%.2f\n",discount);
            printf("Discounted total cost:%.2f\n",(double) customers[i].days*customers[i].fee-discount);
            if (discount>max)
            {
                max=discount;
                str=customers[i].name;
            }
        }
        else 
        {
            printf("Discount applied:%.2f\n",0.00);
            printf("Discounted total cost:%.2f\n",(double) customers[i].days*customers[i].fee);
        }
        puts("");
    }
    printf("Customer with the highest discount:%s:%.2f",str,max);
}