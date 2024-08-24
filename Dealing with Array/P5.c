// difference between the array
#include <stdio.h>

int main()
{

    int a[] = {12, 13, 14, 15, 16, 13};
    int size_a = sizeof(a) / sizeof(a[0]);

    int b[] = {13, 15, 2, 3, 4, 5};

    int size_b = sizeof(b) / sizeof(b[0]);
    int res[10];
    int k = 0;
    printf("Elements of  b which are not in a  \n");

    for (int i = 0; i < size_b; i++)
    {
        int found = 0;
        for (int j = 0; j < size_a; j++)
        {
            if (b[i] == a[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            printf("%d \n", b[i]);
        }
    }

    printf("Elements of a  which are not in b \n");

    for (int i = 0; i < size_a; i++)
    {
        int found = 0;
        for (int j = 0; j < size_b; j++)
        {
            if (a[i] == b[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            printf("%d \n", a[i]);
        }
    }
}
