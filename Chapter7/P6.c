#include <stdio.h>
int count(int a[], int n)
{
     int c = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
       
        if (a[i] > 0)
        {
            /* code */

            c++;
        }
    }
    return c;
}
int main()
{
    int a[] = {1, -2, -3, 4, 5, 6, 7, 8.9, 10};

    int ans = count(a, 10);
    printf("%d \n", ans);

    return 0;
}
