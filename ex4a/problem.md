# Exercise 04: Array Population with Early Termination

## Problem Description
Create a function with the name `populateArray()` which purpose is to populate an array of type integer. The function takes as input an empty array and the size which is 50. The function asks the user to populate with values the array. The values of the array should only be positive. If the user adds a negative or zero the function stops taking new values. The function returns the number of the values which were added to the array.

## Requirements
- Create a function named `populateArray()`
- Function takes two parameters: an integer array and size (which is 50)
- Function prompts user to enter positive integers
- Function stops immediately when user enters zero or negative value
- Function returns the count of positive values successfully added
- Array should only contain the positive values entered before termination

## Function Signature
```c
int populateArray(int arr[50], int size);
```

## Example Interactions

**Example 1: Normal termination**
```
Input sequence: 10, 20, 30, -1
Array contents: [10, 20, 30, ...]
Return value: 3
```

**Example 2: Immediate termination**
```
Input sequence: 0
Array contents: [unchanged...]
Return value: 0
```

**Example 3: Full array**
```
Input sequence: 50 positive numbers
Array contents: [all 50 positive values]
Return value: 50
```