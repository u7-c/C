//calculate factorial

#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case: factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1);  // Recursive case: n * factorial of (n-1)
    }
}

int main() {
    int number;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the recursive factorial function
    int result = factorial(number);

    printf("Factorial of %d is: %d\n", number, result);

    return 0;
}
