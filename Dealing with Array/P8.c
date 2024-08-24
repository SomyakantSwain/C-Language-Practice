
//matrix is identity matrix or not 
#include <stdio.h>

int main()
{
    int arr[100][100];
    int r, c, flag = 1;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    if (r!=c)
    {
       printf("Not possible \n");
       
    }
    

    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j< c; j++)
        {
            scanf("%d", &arr[i][j]);
            
        }
    }
   printf("Elements of the array \n");
   
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j< c; j++)
        {
            printf("%d \t", arr[i][j]);
        }
        printf(" \n");
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j< c; j++)
        {
          
            if (i==j)
            {
               if (arr[i][j]!=1)
               {
                flag=0;
               }
               
            }
            else
            {
                if (arr[i][j]!=0)
                {
                   flag=0;
                }
                
            }
            
        }
    }

    if(flag){
       printf("Givenmatrix is identity \n");
       
    }else
    {
       printf("Not identity \n");
       
    }
    

    return 0;
}