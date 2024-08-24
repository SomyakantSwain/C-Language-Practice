#include <stdio.h>

void printArray(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    /* code */
    printf("%d ,", a[i]);
  }
 printf(" \n");
 
}
void rev(int a[], int n)
  {
    int temp;
    for (int i = 0; i < n/2; i++)
    {
      /* code */
      temp = a[i];
      a[i] = a[n - i - 1];
      a[n - i - 1] = temp;
    }
  }


int main()
{

  int arr[] = {1, 2, 3, 4, 5};
  printArray(arr, 5);
  rev(arr, 5);

  printArray(arr, 5);
  return 0;
}