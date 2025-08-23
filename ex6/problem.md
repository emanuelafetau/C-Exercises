# Exercise 06: Array Comparison Function

## Problem Description
Create a function that compares two character arrays to determine if they are identical. The function should check both the sizes and contents of the arrays.

## Requirements
- Create a function named `compare_arrays()`
- Function takes four parameters: two character arrays and their respective sizes
- Compare arrays for equality (same size and same elements in same positions)
- Return 1 if arrays are identical, 0 if they are different
- Function returns an integer value

## Function Signature
```c
int compare_arrays(char arr1[], int size1, char arr2[], int size2);
```

## Function Logic
- First check if array sizes are different (return 0 if different)
- If sizes are equal, compare each element position by position
- Return 0 immediately if any elements differ
- Return 1 only if all elements match

## Return Values
- `1`: Arrays are identical (same size, same elements)
- `0`: Arrays are different (different size or different elements)
