// Matrices multiplication
#include <stdio.h>

int main()
{
    int a[2][3], b[3][4], res[2][4];
    printf("Enter element in the first matrix \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter element in the second matrix \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k< 3; k++)
            {
                res[i][j] = res[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
    printf("First matrix \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf(" \n");
    }

    printf("Second matrix \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d \t", b[i][j]);
        }
        printf(" \n");
    }

    printf("res matrix \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d \t", res[i][j]);
        }
        printf(" \n");
    }

    return 0;
}