#include<stdio.h>
  
int main(){
  int i=72;
  int* j= &i;
  int** k= &j;
  printf("The address of the variable i is %u\n",&i);
    printf("The address of the variable j is %u\n",j);
     printf("The address of the variable k is %u\n",**k);

     return 0;
}  
