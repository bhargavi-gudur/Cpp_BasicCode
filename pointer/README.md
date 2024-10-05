# Pointer Example

## Description

This C++ program demonstrates the use of pointers and functions. The program prompts the user to enter a value, stores it in a variable, assigns the address of that variable to a pointer, and then prints the value and address using the pointer.

 ## **Code Description**:

This C++ program demonstrates the use of pointers and functions. Here's a breakdown of the code:

**Header**: The comments at the top provide metadata about the file, including the author, version, date, and copyright information.

**Includes**: The #include <iostream> directive allows the program to use input and output streams.

**Function Declaration**: void pointer(int *ptr)- declares the function pointer which takes an integer pointer as an argument.

**Main Function**:

-The main() function declares an integer variable value.
-It then calls the pointer function, passing the address of value.
-Finally, it returns 0 to indicate successful execution.

**Pointer Function**:

-The pointer function takes an integer pointer ptr as an argument.
-Inside the function, an integer variable ptr_val is declared.
-The user is prompted to enter a value, which is then stored in ptr_val.
-The pointer ptr is assigned the address of ptr_val.
-The function then prints the value pointed to by ptr, the address stored in ptr, the value of ptr_val, and the address of ptr_val.

## Getting Started

### Compilation and Execution

1. **Compilation**: Use a C++ compiler to compile the `pointer.cpp` file.
   ```sh
   g++ pointer.cpp -o pointer

2. **exectuable file output**:
   ./pointer 

3. **output** :
 enter the value :
 90
 the value ptr :90
 the  address ptr:0x61feec
 the  value ptr_value:90
 the  address ptr_value:0x61feec



