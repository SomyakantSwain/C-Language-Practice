#include <stdio.h>

int main()
{
    int i = 1, n;
    scanf("%d", &n);
    int fact = 1;
    while (i <= n)
    {
        /* code */
        fact *= i;

        

        i++;
    }
    printf("fact of %d is %d\n", n, fact);

    return 0;
}
