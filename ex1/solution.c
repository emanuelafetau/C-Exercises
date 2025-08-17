#include <stdio.h>

int main() {
    int size;

    // Ask for the size of the array
    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    // Input validation
    if (size <= 0) {
        printf("Array size must be positive!\n");
        return 1;
    }

    // Create a Variable Length Array
    int arr[size];

    // Ask for the elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the array to confirm input
    printf("Array created successfully with %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
