#include <stdio.h>
int SumN(int a);
int main()
{
    printf("Enter the number\n");
    int n;
    scanf("%d", &n);
    printf("sum of %d natural number is  is %d \n", n, SumN(n));
    return 0;
}
int SumN(int a)
{
 if (a<=1)
 {
    /* code */
    return a; // base case  very very important 
 }
 
    return a + SumN(a - 1);
}
