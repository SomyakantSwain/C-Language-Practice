#include<stdio.h>
  
int main(){
int n;
int fact=1;
scanf("%d",&n);
for (int i = 1; i <=n; i++)
{
    /* code */

    fact*= i;
}

printf("fact of number %d is %d ",n,fact);

     return 0;
}  
