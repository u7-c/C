//2.	Write a program in C to check if a number is Palindrome using recursion.
#include <stdio.h>

// Function to reverse the digits of a number recursively
int reverseNumber(int num, int rev) {
    if (num == 0) {
        return rev;
    }
    return reverseNumber(num / 10, rev * 10 + (num % 10));
}

// Function to check if the number is a palindrome
int isPalindrome(int num) {
    if (num < 0) {
        return 0; // Negative numbers are not palindromes
    }
    return num == reverseNumber(num, 0);
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
    
    return 0;
}
