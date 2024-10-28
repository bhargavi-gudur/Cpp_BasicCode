# Unordered Map Example

This project is a simple C++ program that demonstrates the use of the `unordered_map` container to store cumulative sums of numbers.

## Features

- Calculate and store cumulative sums of integers.
- Display the contents of the `unordered_map`.

## Getting Started

### Prerequisites

- A C++ compiler (e.g., GCC)

### Installation

1. Clone the repository or download the source code.
2. Navigate to the project directory.

### Usage

1. Compile the code using the following command:
    ```sh
    g++ -o unordered_map unordered_map.cpp
    ```
2. Run the executable:
    ```sh
    ./unordered_map
    ```

### Key Components
Includes and Namespace
Imports necessary headers (iostream and unordered_map).
Uses the standard namespace (std).

## Class Definition

unorder_map class contains:

## Private Members:

cumulative_sum: Keeps track of the running total.

n: Stores user input.

sum: An unordered_map to store pairs of integers and their cumulative sums.

## Public Methods:

unorder_map(): Constructor.

~unorder_map(): Destructor.

display(): Main function to input, process, and display data.

Constructor and Destructor

unorder_map(): Empty constructor.

~unorder_map(): Empty destructor.

## Display Function

Prompts for user input (n).

Calculates cumulative sums.

Stores pairs in sum.

Prints each pair and the cumulative total.

Main Function

Instantiates unorder_map.

Calls display() to execute the program logic.


