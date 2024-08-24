// Inserting an element in an array

#include <stdio.h>

int main()
{
    int n, val;
    int a[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size=10;
    printf("Enter the position to put your value \n");
    scanf("%d", &n);

    printf("Enter the value to insert \n");
    scanf("%d", &val);
    n--;
    for (int i = size; n < i; i--)
    {
        /* code */
        a[i + 1] = a[i];
    }

    a[n] = val;
    for (int i = 0; i <= 10; i++)
    {
        /* code */
        printf("%d \n", a[i]);
    }
   printf(" %d\n",a[n]);
   
    

    return 0;
}