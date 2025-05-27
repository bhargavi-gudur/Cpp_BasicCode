# Vector Manipulation Project

## Overview

This project demonstrates the use of vectors in C++ to store, manipulate, and display a series of integers and floats. The code includes functions to initialize vectors, modify their values, and dynamically add user input to vectors.

## Features

- **Vector Initialization**: Initializes vectors with predefined values.
- **Value Modification**: Modifies specific values within vectors.
- **Dynamic Input**: Allows users to input values into a vector dynamically using `push_back`.

## Files

- **vector.cpp**: Contains the main code for vector manipulation.

## Functions

### `vector_fun()`

- **Description**: 
  - Initializes two vectors: `v1` (integer vector) and `v2` (float vector).
  - Fills `v1` with 9 elements, each initialized to 1.
  - Fills `v2` with 5 elements, each initialized to 8.9.
  - Changes the value at index 4 of `v2` to 6.7.
  - Prints the elements of both vectors.

### `vector_pushBack_fun()`

- **Description**: 
  - Initializes an empty vector `v3`.
  - Prompts the user to enter values into `v3` using `push_back` until `-1` is entered.
  - Prints the values in `v3`.

## How to Run

1. **Compile** the code using a C++ compiler:
   ```sh
   g++ vector.cpp -o vector_program
