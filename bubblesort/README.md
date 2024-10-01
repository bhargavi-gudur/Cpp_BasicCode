# Bubble Sort Algorithm in C++

This project demonstrates the implementation of the bubble sort algorithm in C++ using the inbuilt `swap` function from the C++ Standard Library. Bubble sort is a simple comparison-based sorting algorithm that works by repeatedly swapping adjacent elements if they are in the wrong order.

## What is Bubble Sort?

Bubble sort is one of the simplest sorting algorithms. It sorts an array by repeatedly stepping through the list, comparing adjacent pairs, and swapping them if they are in the wrong order. This process is repeated until the list is fully sorted. The algorithm gets its name because smaller elements "bubble" to the top (beginning of the list), and larger elements "sink" to the bottom (end of the list).

**Time Complexity**: 
- Worst-case: O(n²)
- Best-case (when the array is already sorted): O(n)
  
**Space Complexity**: O(1), as it is an in-place sorting algorithm.

## Code Overview

The code provides a generic `bubblesort_swap` function, which sorts an array of elements using the bubble sort algorithm. The function makes use of the standard `swap` function to interchange elements.

### Key Files

- **`bubblesort_Swap.cpp`**: This file contains the main logic for sorting an array using bubble sort.

### How to Use

1. **Input**: The program asks for 5 integer inputs, which it stores in an array.
2. **Sorting**: It applies the bubble sort algorithm to arrange the integers in ascending order.
3. **Output**: The sorted array is printed on the screen.

### Example
