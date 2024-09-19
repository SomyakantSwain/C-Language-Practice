#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int inputMatrix[rows][cols];
    int matrix[rows][cols];
    int sum = 0;

    printf("Enter the elements of the input matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &inputMatrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = inputMatrix[i][j];
            sum += matrix[i][j];
        }
    }

    printf("\nThe elements of the matrix are:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nThe sum of all elements in the matrix is: %d\n", sum);

    return 0;
}
