# Data Structures: When to Use `unordered_map`, `map`, `vector`, and `array`

## Overview
This repository provides programs to help you understand the use cases for different data structures in C++. Specifically, we compare the behavior and usage of:
- **Ordered Maps (`map`)**
- **Unordered Maps (`unordered_map`)**
- **Vectors (`vector`)**
- **Arrays**

Each program in this repository demonstrates how these data structures can be used to find the first unique number in a vector.

---

## Data Structure Comparisons

### 1. **Unordered Map (`unordered_map`)**
- **Use When**: You need **fast insertions, lookups, and deletions** based on keys. Average time complexity is **O(1)**.
- **Order of Keys**: Not maintained; elements are stored in an arbitrary order.
- **Best for**: Large datasets with unique keys, where order is not a concern.
- **Drawbacks**: More memory overhead due to the hash table structure.

**Example Use Case**: Counting word frequencies in a large text file.

### 2. **Ordered Map (`map`)**
- **Use When**: You need keys to be stored in **sorted order**. Operations have **O(log n)** time complexity.
- **Order of Keys**: Maintained in ascending order.
- **Best for**: Situations where you need to iterate over sorted data or perform range queries.
- **Drawbacks**: Slower operations compared to `unordered_map` due to the balanced tree structure.

**Example Use Case**: Storing a contact book with names in alphabetical order.

### 3. **Vector (`vector`)**
- **Use When**: You need a **resizable array** that supports fast sequential access and iteration.
- **Best for**: Scenarios where you are frequently adding elements to the end or accessing by index (**O(1)** access time).
- **Drawbacks**: Costly insertions or deletions in the middle of the vector (**O(n)** time complexity).

**Example Use Case**: Storing a dynamic list of user scores.

### 4. **Array (`array` or C-style array)**
- **Use When**: You have a **fixed-size collection** of elements and require fast index-based access (**O(1)**).
- **Best for**: Memory-efficient storage of small, fixed-size datasets.
- **Drawbacks**: Fixed size (cannot resize dynamically), and limited functionality (no built-in methods like `push_back`).

**Example Use Case**: Storing days of the week, where the size is always 7.

---

## Code Examples in This Repository

### 1. **Vector + Ordered Map**: 
   Demonstrates using a `map` to count occurrences of each number and find the first unique number in the vector. The `map` maintains the order of keys.

### 2. **Vector + Unordered Map**:
   Uses `unordered_map` for fast insertion and lookup operations. This example is similar to the ordered map but is faster due to the hash table structure.

### 3. **Vector + Array**:
   Illustrates how to use an array for counting occurrences of elements in the vector, assuming the range of values is known and small.

---

## Performance Summary
- **`unordered_map`**: Use for fast lookups, insertions, and deletions without the need for key order.
- **`map`**: Use when sorted key-value pairs are necessary, with tolerable performance overhead.
- **`vector`**: Use for resizable arrays that require sequential or index-based access.
- **`array`**: Use for small, fixed-size collections where memory efficiency is a priority.

---

## Example Scenarios
- **Contact Book** (sorted by name): Use `map`.
- **Counting Word Frequencies**: Use `unordered_map`.
- **Dynamic List of Scores**: Use `vector`.
- **Fixed Days of the Week**: Use an `array`.

---

## How to Run the Programs
1. **Clone the Repository**:
   ```bash
   git clone <repository-url>
