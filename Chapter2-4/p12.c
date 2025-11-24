#include <stdio.h>

int main()
{
    int aCount=0,bCount=0,cCount=0,dCount=0,fCount=0;
    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");
    int grade;
    while ((grade=getchar())!=EOF)
    {
        switch(grade)
        {
            case 'A':
            case 'a':
                ++aCount;
                break;
            case 'B':
            case 'b':
                ++bCount;
                break;
            case 'C':
            case 'c':
                ++cCount;
                break;
            case 'D':
            case 'd':
                ++dCount;
                break;
            case 'F':
            case 'f':
                ++fCount;
                break;
            case '\n':
            case '\t':
            case ' ':
                break;
            default:
                printf("Incorrect letter grade entered.\n");
                puts("Enter a new grade:");
                break;
        }
    }
    printf("A:%d B:%d C:%d D:%d F:%d",aCount,bCount,cCount,dCount,fCount);
    return 0;
}