// 11.	Write a program in c to find nth Fibonacci number using recursion.

#include <stdio.h>

// Recursive function to find nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n;  // Base case: Fibonacci of 0 is 0, and Fibonacci of 1 is 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
    }
}

int main() {
    int n;

    // Take input from the user
    printf("Enter a number to find the nth Fibonacci number: ");
    scanf("%d", &n);

    // Call the recursive fibonacci function
    int result = fibonacci(n);

    printf("The %dth Fibonacci number is: %d\n", n, result);

    return 0;
}
