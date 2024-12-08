#include <stdio.h>
#include <string.h>

// Recursive function to reverse the string
void reverseString(char str[], int start, int end) {
    // Base case: If start index is greater than or equal to end, return
    if (start >= end) {
        return;
    }
    
    // Swap characters at the start and end indices
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursively call the function for the next indices
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];

    // Taking input from the user
    printf("Enter a string: ");
    gets(str); // 'gets' is used here, but in modern C, it's safer to use 'fgets'

    // Finding the length of the string
    int length = strlen(str);

    // Reversing the string using recursion
    reverseString(str, 0, length - 1);

    // Printing the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
// What Happens in the Story?
// The Teacher's Plan:

// The teacher looks at the first toy and the last toy. They want to swap their places!
// The teacher says, “Let’s swap the first and last toys!” Then, they look at the second and second-last toys, and do the same thing.
// The Magic Trick (Recursion):

// After swapping the first and last toys, the teacher moves a little closer to the middle and does the same thing:
// Swap the second toy with the second-last toy.
// The teacher keeps doing this until there are no more toys to swap. That’s when they stop!
// When Does the Teacher Stop?:

// The teacher stops when they reach the middle of the row of toys. If they’re at the middle or have already swapped the toys, the job is done!
// Now the Toys Are All Reversed:

// The toys are all turned around! What was at the front is now at the end, and what was at the end is now at the front.

