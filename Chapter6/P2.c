#include<stdio.h>
  

  void newAddress(int* a);
  void newAddress(int* a){
    printf("newAddress of i is %u\n",a);
  }

int main(){
int i = 12;
int* j = &i;
printf("the address of the the i is %u\n",&i);
newAddress(j);


     return 0;
}  
