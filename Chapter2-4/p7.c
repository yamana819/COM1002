#include <stdio.h>

int main(void)
{
    int grade,total,counter;
    float average;
    total=0;
    counter=0;
    printf("Enter grade(Enter -1 to terminate):");
    scanf("%d",&grade);
    while (grade!=-1)
    {
        total+=grade;
        counter+=1;
        printf("Enter grade(Enter -1 to terminate):");
        scanf("%d",&grade);
    }
    if (counter!=0)
    {
        average=(float) total/counter;
        printf("Average:%.2f",average);
    }
    else
    {
        printf("No grades were entered.");
    }
    return 0;
}