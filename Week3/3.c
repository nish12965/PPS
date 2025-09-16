// Name : Nishant Kumar
// Reg No : 2025CA063
// Version 1.0.0
// Date 10/09/2025
// Program that accepts a real number x and prints out the corresponding value of sin(1/x)

#include <stdio.h>
#include <math.h>   // for sin()

int main() {
   double x;
   printf("Enter a real number x: ");
   scanf("%lf", &x);

   if (x == 0) {
        printf(" Sin (1/x) is not defined when x = 0.\n");
    } 
   else {
      double result = sin(1.0 / x);
      printf("Value of sin(1/x) is %.6lf\n", result);
   }

   return 0;
}
