// common elements among the two arrays
#include <stdio.h>

int ifexist(int z[], int k, int v)
{
    if (k == 0)
    {
        return 0;
    }
    for (int i = 0; i < k; i++)
    {
        if (z[i] == v)
        {
            /* code */
            return 1;
        }
    }
    return 0;
}
int main()
{

    int a[] = {12, 13, 14, 15, 16, 13};
    int size_a = sizeof(a)/sizeof(a[0]);

    int b[] = {13, 15, 2, 3, 4, 5};

    int size_b = sizeof(b)/sizeof(b[0]);
    int res[10];
    int k = 0;
    for (int i = 0; i < size_b; i++)
    {
        for (int j = 0; j < size_a; j++)
        {
            if (b[i] == a[j])
            {
                if (!ifexist(res, k, b[i]))
                {
                    res[k] = b[i];
                    k++;
                }
            }
        }
    }
    if (k > 0)
    {
        for (int i = 0; i < k; i++)
        {
            printf("%d \n", res[i]);
        }
    }else{
        printf("No common elements found\n");
    }
}
