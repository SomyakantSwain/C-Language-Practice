#include <stdio.h>

// Function to convert binary to decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1, remainder;

    while (binary > 0) {
        remainder = binary % 10;   // Get last binary digit
        decimal += remainder * base; // Multiply with base (power of 2)
        base *= 2;                 // Increment base (2^0, 2^1, 2^2, ...)
        binary /= 10;              // Remove last digit
    }

    return decimal;
}

// Function to convert decimal to hexadecimal (and store in array)
int decimalToHexadecimal(int decimal, int hex[]) {
    int i = 0;

    while (decimal != 0) {
        hex[i] = decimal % 16;   // Get remainder when dividing by 16
        decimal /= 16;           // Divide decimal by 16
        i++;
    }

    return i; // Return the number of hexadecimal digits
}

// Function to print hexadecimal number
void printHexadecimal(int hex[], int length) {
    printf("Hexadecimal: ");
    
    for (int j = length - 1; j >= 0; j--) {
        if (hex[j] < 10) {
            printf("%d", hex[j]);  // Print digits 0-9
        } else {
            printf("%c", hex[j] + 55);  // Print letters A-F (10 = A, 11 = B, ...)
        }
    }
    printf("\n");
}

int main() {
    long long binary;
    int hex[100];

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    // Step 1: Convert binary to decimal
    int decimal = binaryToDecimal(binary);

    // Step 2: Convert decimal to hexadecimal and get the length of hex digits
    int hexLength = decimalToHexadecimal(decimal, hex);

    // Step 3: Print the hexadecimal number
    printHexadecimal(hex, hexLength);

    return 0;
}
