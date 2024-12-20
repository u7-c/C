// 16.	Write a program in C to compute the value of a number raised to the power “power”.

#include <stdio.h>

// Recursive function to compute base raised to the power exponent
int power(int base, int exponent) {
    // Base case: If exponent is 0, any number raised to the power 0 is 1
    if (exponent == 0) {
        return 1;
    }
    // Recursive case: base^exponent = base * base^(exponent-1)
    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;

    // Take input from the user
    printf("Enter the base number: ");
    scanf("%d", &base);
    
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Call the power function
    int result = power(base, exponent);

    // Output the result
    printf("%d raised to the power of %d is: %d\n", base, exponent, result);

    return 0;
}
