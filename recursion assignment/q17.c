#include <stdio.h>

// Recursive function to reverse a number
void reverseNumber(int n) {
    // Base case: if the number becomes 0, stop the recursion
    if (n == 0) {
        return;
    }
    
    // Print the last digit of the number
    printf("%d", n % 10);
    
    // Recursive case: call reverseNumber with the remaining number (n/10)
    reverseNumber(n / 10);
}

int main() {
    int num;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print the reverse of the number
    printf("The reverse of the number is: ");
    reverseNumber(num);
    printf("\n");

    return 0;
}
