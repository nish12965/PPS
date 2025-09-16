// Name : Nishant Kumar
// Reg No : 2025CA063
// Version 1.0.0
// Date 10/09/2025

#include <stdio.h>

int main() {
    int number;

    printf("Enter a decimal number (1–31): ");
    scanf("%d", &number);

    if (number <= 0 || number >= 32) {
        printf("Number must be between 1 and 31.\n");
    } else {
        // Print binary representation from highest bit (16) down to lowest (1)
        printf("Binary representation of number : ");
        for (int i = 4; i >= 0; i--) {
            int bit = (number >> i) & 1;  // extract ith bit
            printf("%d", bit);
        }
        printf("\n");
    }

    return 0;
}
