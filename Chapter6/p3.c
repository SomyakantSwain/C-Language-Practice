#include <stdio.h>
void func(int *a)
{
    *a = *a * 10;
    printf("Value of x after function call: %d\n", *a);
}
int main()
{

    int x = 45;
    printf("value of x is %d\n", x);
    func(&x);
    return 0;
}
