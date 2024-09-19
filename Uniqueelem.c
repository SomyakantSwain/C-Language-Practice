#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 1, 1, 55, 3, 3, 7, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int r[10];
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        int exists = 0;

        for (int j = 0; j < k; j++)
        {
            if (r[j] == a[i])
            {
                exists = 1;
                break;
            }
        }

        if (!exists)
        {
            r[k] = a[i];
            k++;
        }
    }

    if (k > 0)
    {
        for (int i = 0; i < k; i++)
        {
            printf("%d,", r[i]);
        }
    }

    return 0;
}
