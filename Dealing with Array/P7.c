#include <stdio.h>

int main()
{
    
    static int arr[100][100];
    int r, c, ctr = 0;
    printf("Enter no of rows \n");

    scanf("%d", &r);
    printf("Enter no of columns \n");
    scanf("%d", &c);

    printf("Enter elements of the matrix \n");
    for (int i = 0; i < r ; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 0)
            {
                ctr++;
            }
        }
    }
    if (ctr > ((r*c) / 2))
    {
        printf("Given matrix is sprash matrix  \n");
    }
    else
    {
        printf("Matrix is not sprash  \n");
    }

    return 0;
}