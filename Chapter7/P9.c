#include<stdio.h>
  
int main(){
    int i,j,k;
    int c=0;

int arr[2][3][4];
for ( i = 0; i < 2; i++)
{
    /* code */
    for ( j = 0; j < 3; j++)
    {
        /* code */
        for ( k = 0; k < 4; k++)
        {
            /* code */
         printf("%u \n",  &arr[i][j][k]);

         
         
        }
    }
    
}



     return 0;
}  