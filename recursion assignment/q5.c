// Write a program in c to multiply two numbers using recursion (Do not use multiply operator).

#include <stdio.h>

// Recursive function to multiply two numbers
int multiply(int a, int b) {
    // Base case
    if (b == 0) {
        return 0;
    }

    // Recursive case: add `a` to the result of multiply(a, b-1)
    if (b > 0) {
        return a + multiply(a, b - 1);
    }

    // Handle negative multiplier
    return -multiply(a, -b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = multiply(num1, num2);

    printf("The product of %d and %d is: %d\n", num1, num2, result);

    return 0;
}



