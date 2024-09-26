#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    int n, x;

    printf("Enter the string: \n");
    scanf("%s", str1);

    n = strlen(str1);
    x = 0;

    for (int i = n - 1; i >= 0; i--) {
        str2[x] = str1[i];
        x++;
    }
       str2[x] = '\0'; // Correctly assign the null terminator other word aeta jadi lekhibani code run pare khali bhabuthiba kauthi bhul hela  ;


    if (strcmp(str1, str2) == 0) {
        printf("String is a palindrome\n");
    } else {
        printf("String is not a palindrome\n");
    }

    return 0;
}