#include<stdio.h>
  
int main(){
  int n=1;
  int prime=0;

  if ( n=1 || n==0)
  {
    /* code */
    prime=1; 
  }
  
  for (int  i = 2; i < (n/2) ; i++)
  {
    /* code */
    if(n%i==0 || n!=2 ){
        prime=1;
        break;
    }

  }
  if (prime==0)
  {
    /* code */
    printf("%d is prime",n);
  }
  else
  {
    /* code */
    printf(" %d is not prime ",n);
  }
  
  
  

     return 0;
}  
