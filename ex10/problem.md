# Exercise 10: Structure Input Function with typedef

## Problem Description
Create a function named `read_struct()` that doesn't take any input parameters. The function creates, populates, and returns a structure. Use the subject structure from the previous exercise and implement proper input handling with validation and buffer management.

## Requirements
- Use `typedef` to create an alias for the structure
- Create a function named `read_struct()` that takes no parameters
- Function prompts user to input all structure fields
- Function creates and returns a populated structure
- Implement proper string input handling with buffer limits
- Handle mixed input types (integers and strings) safely

## Structure Definition with typedef
```c
typedef struct {
    int id;
    char code[6];
    char title[50];
    int year;
} subject;
```

## Function Signature
```c
subject read_struct();
```