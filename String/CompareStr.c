#include <stdio.h>
#include <string.h> /

int main()
{
    char str1[14];
    char str2[14];

    printf("Enter the first string (max 13 characters): ");
    gets(str1);

    printf("Enter the second string (max 13 characters): ");

    gets(str1);

    int len1 = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        len1++;
    }
    printf("Length of the first string: %d\n", len1);

    int len2 = 0;
    for (int i = 0; str2[i] != '\0'; i++)
    {
        len2++;
    }
    printf("Length of the second string: %d\n", len2);

    if (strcmp(str1, str2) == 0)
    {
        printf("The strings are equal.\n");
    }
    else
    {
        printf("The strings are not equal.\n");
    }
    printf("Comparing content of strings:\n");
    for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            printf("Difference at index %d: '%c' (str1) vs '%c' (str2)\n", i, str1[i], str2[i]);
        }
    }

    return 0;
}
