#include<stdio.h>
  
int main(){
    float tempF(float x);
   printf("Enter the temperature in celcius\n");
   float f;
   scanf("%f",&f);

printf("%f degree  celsius  in farenheit %f\n",f,tempF(f));
     return 0;
}  
float tempF(float x){
    float temp= (x*(9.0/5.0))+32;
    return temp;
}
