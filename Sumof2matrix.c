#include <stdio.h>

int main() {
    int rows, cols;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

   
    int matA[rows][cols], matB[rows][cols], result[rows][cols];

   
    printf("Enter the elements of the first mat:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element A[%d][%d]: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }

    
    printf("Enter the elements of the second mat:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element B[%d][%d]: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matA[i][j] + matB[i][j];
        }
    }

   
    printf("\nThe resultant mat after addition is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
