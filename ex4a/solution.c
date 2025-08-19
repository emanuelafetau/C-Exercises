#include <stdio.h>

int populateArray(int arr[50], int size) {
    int i;
    int count = 0;
    
    printf("Enter positive integers (enter 0 or negative to stop):\n");
    
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        
        if (arr[i] <= 0) {
            // Stop immediately when zero or negative is entered
            break;
        }
        
        count++;  // Only increment if value was positive
    }
    
    return count;
}