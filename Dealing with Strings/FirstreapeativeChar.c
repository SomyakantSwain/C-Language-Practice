#include <stdio.h>
#include <string.h>

#include <stdio.h>
int is_exist(char c, char str[], int v)
{
    for (int i = 0; i < v; i++)
    {
        if (str[i] == c)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    char str1[40], str2[40];
    int i, n, x;
    printf("Enter element in the string  \n");
    scanf("%s", str1);
    n=strlen(str1);
    x = 1;
    for (i = 0; i < n; i++)
    {
        if (is_exist(str1[i], str2, x))
        {
            printf("First repeatative element in %s is %c \n", str1, str1[i]);
            break;
        }
        else
        {
            str2[x] = str1[i];
            x++;
        }
    }
    if (i == n)
    {
        printf(" There is no repeating element \n");
    }

    return 0;
}