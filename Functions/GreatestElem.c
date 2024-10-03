#include <stdio.h>

int findGreatest(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2, greatest;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    greatest = findGreatest(num1, num2);

    printf("The greatest number is: %d\n", greatest);

    return 0;
}