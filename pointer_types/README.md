# Pointer_types.cpp

This program demonstrates the usage of `void` pointers and handling different data types (such as `int`, `float`, and `char`) using `void` pointers in C++. It includes a simple example of how `void` pointers can be used to point to various data types and how to handle them by casting the pointer to the appropriate type.

## Contents

- `Pointer_types.cpp`: The main C++ program file that demonstrates the functionality of `void` pointers.

## Key Concepts

- **Void Pointers**: A `void` pointer is a special type of pointer that can hold the address of any data type. However, to dereference the pointer, you must explicitly cast it to the correct data type.
- **Pointer Operations**: This program shows how to assign a void pointer to different types (`int`, `float`, `char`) and then dereference them using typecasting.

## Prerequisites

Before running the program, make sure you have the following:

- A C++ compiler (e.g., `g++` for Linux/Unix/Mac or MinGW for Windows)
- Basic knowledge of pointers and C++ programming

## Program Overview

The program contains two main functions:

- **void_ptr()**: Demonstrates how a `void` pointer can point to an integer and how to dereference the pointer.
- **diff_datatype_ptr()**: A more general function that takes a `void` pointer and a character representing the data type (`i` for integer, `f` for float, and `c` for char) and prints the value of the pointer by casting it to the appropriate type.

## How to Run

### Step 1: Clone the Repository
Clone the repository from GitHub:

```sh
git clone https://github.com/bhargavi-gudur/C_BasicCode.git

### Step 2: Navigate to the Directory

```sh
cd C_BasicCode

### Step 3: Compile the Program

```sh
g++ -o Pointer_types Pointer_types.cpp

### Step 4 : Run the Program

```sh
./Pointer_types 

### Output
```sh
*****************************************
var:14
ptr_void:14
*****************************************
integer 56
*****************************************
floating 67.89
*****************************************
character b
*****************************************





