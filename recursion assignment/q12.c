// 12.	Write a program in c to implement Tower of Hanoi Algorithm.

#include <stdio.h>

// Recursive function to find the length of a string
int stringLength(char str[]) {
    // Base case: if the current character is the null terminator, return 0
    if (str[0] == '\0') {
        return 0;
    } else {
        // Recursive case: 1 + length of the remaining string
        return 1 + stringLength(str + 1);
    }
}

int main() {
    char str[100];

    // Take input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // To read a line of text (including spaces)

    // Compute the length using the recursive function
    int length = stringLength(str);

    // Output the result
    printf("The length of the string is: %d\n", length);

    return 0;
}
