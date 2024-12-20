// 9.	Write a program in c to search an element in a sorted array using linear search.

#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Element found, return index
        }
        // Since the array is sorted, we can stop if the current element is greater than the key
        if (arr[i] > key) {
            break;
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[100], n, key;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    printf("Enter the elements of the sorted array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int result = linearSearch(arr, n, key);

    if (result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
