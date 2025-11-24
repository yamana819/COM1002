#include <stdio.h>

void function1(int a);
void function2(int b);
void function3(int c);

int main()
{
    void (*f[3])(int)={function1,function2,function3};
    printf("Enter a number between 0 2(otherwise the program will bi terminated):");
    size_t choice;
    scanf("%u",&choice);
    while (0<=choice<=2)
    {
        (*f[choice])(choice);
        printf("Enter a number between 0 2(otherwise the program will bi terminated):");
        scanf("%u",&choice);
    }
}

void function1(int a)
{
    printf("%d\n",a*a);
}

void function2(int b)
{
    printf("%d\n",b*b*b);
}

void function3(int c)
{
    printf("%d\n",c*c*c*c);
}