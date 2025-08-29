#include <stdio.h>

#define MAX_SIZE 20

int add_to_index(int arr[], int *size, int index, int value) {
    // Check if array is full
    if (*size >= MAX_SIZE) {
        printf("Error: Array is full.\n");
        return 0; 
    }

    // Check if index is valid (must be 0 <= index <= size)
    if (index < 0 || index > *size) {
        printf("Error: Invalid index.\n");
        return 0; 
    }

    // Shift elements forward to make space
    for (int i = *size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new value
    arr[index] = value;

    // Increase size
    (*size)++;

    return 1; // success
}

int main() {
    int arr[MAX_SIZE];
    int size = 0; // initially empty

    add_to_index(arr, &size, 0, 10); 
    add_to_index(arr, &size, 1, 20); 
    add_to_index(arr, &size, 1, 15); 
    add_to_index(arr, &size, 0, 5); 

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
