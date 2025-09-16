// Name : Nishant Kumar
// Reg No : 2025CA063
// Version 1.0.0
// Date 10/09/2025

#include <stdio.h>

int main() {
    double fraction;
    int i;

    printf("Enter a positive decimal fraction (0 < fraction < 1): ");
    scanf("%lf", &fraction);

    if (fraction <= 0 || fraction >= 1) {
        printf("Enter a positive decimal fraction which is greater than 0 and less than 1.\n");
    }
    else {
        printf("Binary representation (up to 4 bits): 0.");
        for (i = 0; i < 4; i++) {
            fraction *= 2;
            int bit = (int)fraction;  // get the integer part (0 or 1)
            printf("%d", bit);
            fraction -= bit;          // remove the integer part
            if (fraction == 0) 
                break; // stop if fraction becomes 0
        }
        printf("\n");
    }

    return 0;
}
