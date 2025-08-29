# Exercise 09: Dynamic Array Management with Constants

## Problem Description
Create a function that manages a dynamic array by adding elements to the end. Use a defined constant for the maximum array size and implement proper bounds checking. The function should handle array capacity limits gracefully.

## Requirements
- Define a constant `MAX_SIZE` with value 20 for maximum array capacity
- Create a function named `add_at_the_end()` 
- Function takes: array, pointer to current size, and value to add
- Add elements only if array has space available
- Display error message when array is full
- Function returns nothing (void)
- Demonstrate usage in main() with sample elements

## Function Signature
```c
void add_at_the_end(int arr[], int *size, int value);
```