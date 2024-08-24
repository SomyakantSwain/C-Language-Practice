// finding the unique elements in the first array
#include <stdio.h>
int ifexist(int z[], int p, int v)
{
    if (v == 0)
    {
        return 0;
    }
    for (int i = 0; i < p; i++)
    {
        if (z[i] == v)
        {
            return 1;
        }
    }
    return 0;

}
int main()
{
    int a[] = {1, 2, 3, 4, 1,1,55,3,3,7,2,};
    int n = sizeof(a) / sizeof(a[0]);
    int r[10];
    int k=0;

     for (int  i = 0; i < n; i++)
     {
        if (! ifexist(r,k,a[i]))
        {
           r[k]=a[i];
           k++;
        }
        
     }
     if (k>0)
     {
       for (int  i = 0; i < k; i++)
       {
      printf("%d \n",r[i]);
      
       }
       
     }
     
     

    return 0;
}