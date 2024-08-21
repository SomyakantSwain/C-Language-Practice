#include<stdio.h>
  
 int fibo(int n);
int main(){
  printf("Enter the position\n");
   int n;
   scanf("%d",&n);
printf("fibo of %d is %d \n",n,fibo(n));
     return 0;
}  
int fibo(int n){
    if (n==0)
    {
        /* code */
        return 0;
    }
    if (n==1)
    {
        /* code */
        return 1;
    }
    int res = fibo(n-1)+fibo(n-2);
    return res ;
    
}
