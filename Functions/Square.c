#include <stdio.h>

int findSquare(int num) {
    return num * num;
}

int main() {
    int num, square;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = findSquare(num);

    printf("Square of %d is: %d\n", num, square);

    return 0;
}