#include <stdio.h>
#include <string.h>

int main()
{

    char arr[104];
    int i, n;

    printf("Enter a string: ");
    gets(arr);
    i = 0;
    while (arr[i] != '\0')
    {
        arr[i] = arr[i] - 32;

        i++;
    }
    puts(arr);

    return 0;
}