// merge two sorted array in c
#include <stdio.h>

int merge(int z[], int x[], int m[], int a, int b)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < a && j < b)
    {
        if (z[i] < x[j])
        {
            m[k] = z[i];
            k++;
            i++;
        }
        else
        {
            m[k] = x[j];
            k++;
            j++;
        }
    }
    while (i < a)
    {
        m[k] = z[i];
        k++;
        i++;
    }
    while (j < b)
    {
        m[k] = x[j];
        k++;
        j++;
    }
}

int main()
{
    int a[5] = {
        1,
        2,
        3, 
        4,
        90,
    },
        b[6] = {6, 7, 8, 9, 10, 11}, m[11];
    int i;
    merge(a, b, m, 5, 6);
    for (i = 0; i < 11; i++)
    {
        printf("%d ", m[i]);
    }

    return 0 ;
} 
