// Name : Nishant Kumar
// Reg No : 2025CA063
// Version : 1.0.0

//Acceptas a positive integer less than 1000 and prints out the sum of the digits of this number.
#include <stdio.h>
int main(){
    int sum=0,number;
    printf("Enter a positive number less than 1000 : ");
    scanf("%d",&number);

    if (number <= 0 || number >= 1000) {
        printf("Please Enter number between 1 and 1000.");
    }
    else {
        int result = number;  
        while (result > 0) {
            sum += result % 10;  // get last digit
            result /= 10;        // remove last digit
        }
        printf("Sum of the digits is %d : ", sum);
    }
    return 0;
}