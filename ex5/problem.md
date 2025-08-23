# Exercise 05: Character Classification Function

## Problem Description
Create a function that analyzes a character array and counts how many uppercase letters, lowercase letters, and digits it contains. The function should use pass by reference to return the three counts.

## Requirements
- Create a function named `check_characters()`
- Function takes parameters: character array, array size, and three integer pointers
- Count uppercase letters (A-Z), lowercase letters (a-z), and digits (0-9)
- Use pointers to return all three counts to the caller
- Function returns nothing (void)

## Function Signature
```c
void check_characters(char arr[], int size, int *uppercase, int *lowercase, int *digits);
```