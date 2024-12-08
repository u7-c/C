#include <stdio.h>

// Function to compute the length of a string recursively
int stringLength(const char *str) {
    // Base case: if the string is empty, return 0
    if (*str == '\0') {
        return 0;
    }
    // Recursive case: count 1 for the current character and move to the next
    return 1 + stringLength(str + 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  // Take input using scanf (no spaces allowed)

    int length = stringLength(str);
    printf("The length of the string is: %d\n", length);

    return 0;
}
