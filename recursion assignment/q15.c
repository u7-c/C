// 15.	Write a program in C to compute the summation of the digits in the given number.

#include <stdio.h>

// Recursive function to compute the sum of digits of a number
int sumOfDigits(int n) {
    // Base case: if the number is 0, the sum of digits is 0
    if (n == 0) {
        return 0;
    } else {
        // Recursive case: sum of last digit + sum of digits of the remaining number
        return (n % 10) + sumOfDigits(n / 10);
    }
}

int main() {
    int num;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the sumOfDigits function
    int result = sumOfDigits(num);

    // Output the result
    printf("The sum of the digits is: %d\n", result);

    return 0;
}
