#include <stdio.h>
#include <ctype.h>

int main()
{
    printf(isdigit('8')?"\'8\' is a digit":"\'8\' is not a digit");
    puts("");
    printf(isalnum('a')?"\'a\' is an alnum":"\'a\' is not an alnum");
    puts("");
    printf(isalnum('2')?"\'2\' is an alnum":"\'2\' is not an alnum");
    puts("");
    printf(isblank(' ')? "\' \' is blank ":"\' \' is not blank");
}