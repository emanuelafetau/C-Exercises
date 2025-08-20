#include <stdio.h>

void populateArray(int arr[50], int *count) {
    int i;
    *count = 0;  // Initialize count
    
    printf("Enter positive integers (0 or negative to stop):\n");
    
    for (i = 0; i < 50; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        
        if (arr[i] <= 0) {
            break;
        }
        
        (*count)++;  // Increment count through pointer
    }
}