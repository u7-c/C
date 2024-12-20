//lcm

#include <stdio.h>

// Recursive function to compute GCD of two numbers
int gcd(int a, int b) {
    // Base case: if b is 0, GCD is a
    if (b == 0) {
        return a;
    }
    // Recursive case: gcd of b and a % b
    return gcd(b, a % b);
}

// Function to compute LCM of two numbers using GCD
int lcm(int a, int b) {
    // LCM formula: LCM(a, b) = (a * b) / GCD(a, b)
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    // Take input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Compute LCM of num1 and num2
    int result = lcm(num1, num2);

    // Output the result
    printf("The LCM of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
