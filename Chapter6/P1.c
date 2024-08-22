#include<stdio.h>
  
int main(){
  int i=72;
  int* j= &i;
  printf("The address of the variable i is %u\n",&i);
    printf("The address of the variable i is %u\n",j);

     return 0;
}  
