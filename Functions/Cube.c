#include <stdio.h>

void findCube() {
    int num, cube;

    printf("Enter a number: ");
    scanf("%d", &num);

    cube = num * num * num;

    printf("Cube of %d is: %d\n", num, cube);
}

int main() {
    findCube();

    return 0;
}