# Exercise 03: Array Population with Input Validation

## Problem Description
Create a function named `populateArray()` that populates an array of type integer with positive integers only. The function takes as input an empty array and the array size. The function asks the user to populate the array but validates that all entered values are positive integers. If a user enters a non-positive value (zero or negative), the function should display an error message and ask for input again until a positive value is entered. The function doesn't return anything.

## Requirements
- Create a function named `populateArray()` 
- Function takes two parameters: an empty integer array and the array size
- Function prompts the user to enter positive integers for the array
- Function validates each input to ensure it's positive (> 0)
- If input is invalid (≤ 0), display error message and re-prompt
- Continue asking for the same element until a valid positive value is entered
- Function returns nothing (void)

## Input Validation Rules
- Accept: Any integer > 0
- Reject: Zero (0), negative integers
- Action on rejection: Display error message and re-prompt for the same element

## Example Interaction
```
Input/Output:
Enter 3 positive integers:
Element 1: -5
Invalid input! Please enter a positive integer.
Element 1: 0
Invalid input! Please enter a positive integer.
Element 1: 10
Element 2: 25
Element 3: -2
Invalid input! Please enter a positive integer.
Element 3: 15
```
