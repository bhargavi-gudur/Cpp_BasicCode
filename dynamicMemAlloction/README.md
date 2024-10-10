# Dynamic Memory Allocation in C++

## Overview

This project demonstrates the usage of dynamic memory allocation in C++ using `malloc`, `calloc`, and `realloc`. It includes examples of allocating memory, assigning values, resizing memory, and freeing up memory resources.

## File Description

- **dynamicmemalloc.cpp**: Contains the main implementation of the project, demonstrating the use of `malloc`, `calloc`, and `realloc` for dynamic memory allocation.

## Function Descriptions

### `int main()`
The entry point of the program. Calls the `dynamicmem_alloc` function.

### `int dynamicmem_alloc()`
Calls the following functions to demonstrate different memory allocation techniques:
- `malloc_allocation()`
- `calloc_allocation()`
- `realloc_allocation()`

### `void malloc_allocation()`
Allocates memory for an integer using `malloc`, assigns a value to the allocated memory, and displays the value.

### `void calloc_allocation()`
Allocates memory for an array of integers using `calloc`, assigns values to the allocated memory, and displays the values.

### `void realloc_allocation()`
Allocates memory for an array of integers using `malloc`, then resizes the array using `realloc` within a loop, assigns values to each element, and displays them.

## How to Compile and Run

1. **Compile** the program using a C++ compiler (e.g., `g++`):
   ```sh
   g++ dynamicmemalloc.cpp -o dynamicmemalloc
2. **Run in Terminal**
   ```sh
    ./dynamicmemalloc
3. **Output**
   ```sh
    