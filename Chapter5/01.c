#include<stdio.h>
  
int main(){
    int avg(int a, int b,int c);

printf("the avg is %d\n",avg(1,2,3));
     return 0;
}  
int avg(int a,int b,int c){
    int res=(a+b+c)/3;
    return res;

}