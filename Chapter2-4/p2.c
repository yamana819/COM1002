#include <stdio.h>

int main(void)
{
    int grade;
    printf("Please, enter the grade:");
    scanf("%d",&grade);
    if (grade>=60)  //puts(grade>=60 ?"Passed":"Failed"); //This is a short notation of if/else structure
    {
        puts("Passed");
    }
    else
    {
        puts("Failed");
    }
    return 0;
}