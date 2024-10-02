# minmax_arr

## Description

The `minmax_arr.cpp` file contains a C++ program that finds the minimum and maximum values in an array. This program is designed to help beginners understand how to perform basic array manipulations and use functions in C++. 

### Key Components

- **Author**: The file includes metadata such as the author's name (Gandla Bhargavi), version, date, and copyright information.
- **Functions**:
  - `max_arr(int a[], int size)`: This function takes an array and its size as parameters and returns the maximum value in the array.
  - `min_arr(int a[], int size)`: This function takes an array and its size as parameters and returns the minimum value in the array.
- **Main Function**:
  - Initializes an array with predefined values.
  - Calculates the size of the array.
  - Calls `min_arr` and `max_arr` functions to find the minimum and maximum values.
  - Prints the size of the array, the minimum value, and the maximum value.

## Usage

To compile and run the program, use the following commands:

```sh
g++ minmax_arr.cpp -o objminmax
./objminmax
