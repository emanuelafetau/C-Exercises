#include <stdio.h>

void populateArray(int arr[], int size) {
    int i;
    printf("Enter %d positive integers:\n", size);

    for (i = 0; i < size; i++) {
        do {
            printf("Element %d: ", i + 1);
            scanf("%d", &arr[i]);

            if (arr[i] <= 0) {
                printf("Invalid input! Please enter a positive integer.\n");
            }
        } while (arr[i] <= 0);  // keep asking until value is positive
    }
}

/*int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    populateArray(arr, size);

    printf("The array elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}*/
