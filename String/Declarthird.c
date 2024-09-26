#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[13];

    printf("Enter a string (max 13characters): ");

    gets(str);

    puts(str);

    return 0;
}
