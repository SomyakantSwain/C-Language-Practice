// Delete an element from an array?
#include <stdio.h>

int main()
{
    int n;

    int a[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    printf("Enter the position you want to delete \n");
    scanf("%d", &n);
    if (n > size)
    {
        printf("delition not possible \n");
    }
    n--;
    for (int i = n; i < size; i++)
    {
        /* code */
        a[i] = a[i + 1];
    }
   printf("New array \n");
   
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d \n", a[i]);
    }

    return 0;
}