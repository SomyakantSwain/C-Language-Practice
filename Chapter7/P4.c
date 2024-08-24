#include<stdio.h>
  
int main(){
    int n;
    int arr[10];

printf("Enter the number for which you want the table \n");
scanf("%d",&n);
for (int  i = 0; i < 10; i++)
{
    /* code */
    arr[i]=n*(i+1);
}


for (int i = 0; i < 10; i++)
 {
    /* code */
   printf("%d X %d = %d \n",n,i+1, arr[i]);
   
 }

     return 0;
}  