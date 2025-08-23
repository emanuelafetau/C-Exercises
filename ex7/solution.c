#include <stdio.h>

#define MAX_SIZE 20

void add_at_the_end(int arr[], int *size, int value) {
    if (*size < MAX_SIZE) {
        arr[*size] = value;   // place the new value at the end
        (*size)++;            // increase the current size
    } else {
        printf("Array is full, cannot add more elements.\n");
    }
}

int main() {
    int arr[MAX_SIZE];
    int size = 0; // initially empty

    // Adding some elements
    add_at_the_end(arr, &size, 5);
    add_at_the_end(arr, &size, 10);
    add_at_the_end(arr, &size, 15);

    // Print the array
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
