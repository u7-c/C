// 4.	Write a program in c to find first uppercase letter in a string using recursion.
#include <stdio.h>
#include <ctype.h>

// Function to find the first uppercase letter in a string using recursion
char findFirstUppercase(char str[], int index) {
    if (str[index] == '\0') {
        return '\0'; // Base case: end of string
    }
    if (isupper(str[index])) {
        return str[index]; // Found the first uppercase letter
    }
    return findFirstUppercase(str, index + 1); // Recursive call
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    char result = findFirstUppercase(str, 0);

    if (result != '\0') {
        printf("The first uppercase letter is: %c\n", result);
    } else {
        printf("No uppercase letter found in the string.\n");
    }

    return 0;
}
