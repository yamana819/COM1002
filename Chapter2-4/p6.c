#include <stdio.h>

int main(void)
{
    unsigned int counter; //counter should be a non-negative integer
    int grade,total,average;
    total=0;
    counter=1;
    while (counter<=10)
    {
        printf("Enter the grade of student:");
        scanf("%d",&grade);
        total+=grade;
        counter+=1;
    }
    average=total/counter;
    printf("The class average is %d",average);
    return 0;
}