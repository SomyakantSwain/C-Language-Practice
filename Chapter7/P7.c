#include <stdio.h>

int main()
{

    int i, j ;
    int arr[3][10];
    int mul[] = {2,
                 7,
                 9};

    for (i = 0; i < 3; i++)

    {

        for (j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }

    for (i = 0; i < 3; i++)

    {

        for (j = 0; j < 10; j++)
        {
            printf(" %d ", arr[i][j]);
        }
       printf(" \n");
       
       
    }

    return 0;
}