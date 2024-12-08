//1.	Write a program in C to print even or odd numbers in a given range using recursion.
#include <stdio.h>

// Function to print even numbers in the given range
void printEven(int start, int end) {
    if (start > end) 
        return;
    if (start % 2 == 0) 
        printf("%d ", start);
    printEven(start + 1, end);
}

// Function to print odd numbers in the given range
void printOdd(int start, int end) {
    if (start > end) 
        return;
    if (start % 2 != 0) 
        printf("%d ", start);
    printOdd(start + 1, end);
}

int main() {
    int start, end, choice;

    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Choose an option:\n1. Print Even Numbers\n2. Print Odd Numbers\n");
    scanf("%d", &choice);

    printf("Numbers in the range [%d, %d]:\n", start, end);
    if (choice == 1) {
        printEven(start, end);
    } else if (choice == 2) {
        printOdd(start, end);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
