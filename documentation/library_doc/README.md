
# C++ Standard Template Library (STL) Containers: `map`, `unordered_map`, `array`, and `vector`

## Overview
This document provides an overview of some of the key data structures provided by the C++ Standard Template Library (STL): **`map`**, **`unordered_map`**, **`array`**, and **`vector`**. Each container serves a different purpose and has its own strengths and use cases.

---

## 1. `map` Library

### Header File
```cpp
#include <map>
```

### Description
A `map` is an associative container that stores **key-value pairs** in a **sorted order**. It is implemented as a balanced binary search tree (e.g., Red-Black Tree).

### Key Features
- **Ordered Keys**: Elements are sorted by keys.
- **Unique Keys**: No duplicate keys are allowed.
- **Logarithmic Operations**: Insertions, deletions, and lookups are **O(log n)**.

### Usage Example
```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> ages;
    ages["Alice"] = 25;
    ages["Bob"] = 30;
    ages["Charlie"] = 22;

    // Iterating through the map
    for (const auto &pair : ages) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
```

### When to Use `map`
- When you need **sorted key-value pairs**.
- When performing **range queries** or **ordered iteration**.

---

## 2. `unordered_map` Library

### Header File
```cpp
#include <unordered_map>
```

### Description
An `unordered_map` is an associative container that stores **key-value pairs** without any order. It uses a **hash table** for storage.

### Key Features
- **No Order**: Elements are not stored in any particular order.
- **Fast Access and Insertion**: Average time complexity for operations is **O(1)**.
- **Unique Keys**: Each key must be unique.

### Usage Example
```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> ages;
    ages["Alice"] = 25;
    ages["Bob"] = 30;
    ages["Charlie"] = 22;

    // Iterating through the unordered_map
    for (const auto &pair : ages) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
```

### When to Use `unordered_map`
- When **order does not matter**.
- For **fast lookups** and insertions.

---

## 3. `array` Library

### Header File
```cpp
#include <array>
```

### Description
The `array` is a fixed-size container that provides a more functional and safer alternative to traditional C-style arrays.

### Key Features
- **Fixed Size**: The size is determined at compile-time.
- **Fast Access**: Random access to elements is **O(1)**.
- **Better Safety**: Provides safer access through member functions like `at()`.

### Usage Example
```cpp
#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> arr = {1, 2, 3, 4, 5};

    // Access elements using at()
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << arr.at(i) << " ";
    }
    cout << endl;

    return 0;
}
```

### When to Use `array`
- When you have a **fixed-size collection**.
- For **memory-efficient** storage and **fast access**.

---

## 4. `vector` Library

### Header File
```cpp
#include <vector>
```

### Description
A `vector` is a dynamic array that can change size during runtime. It is one of the most commonly used STL containers due to its flexibility.

### Key Features
- **Dynamic Size**: Can grow or shrink as needed.
- **Efficient Access**: Provides **O(1)** access by index.
- **Resizable and Flexible**: Offers functions like `push_back()` and `pop_back()` for modifying size.

### Usage Example
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    // Add an element to the end
    vec.push_back(6);

    // Iterating through the vector
    for (const int &val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
```

### When to Use `vector`
- When you need a **resizable array**.
- For **sequential access** and when adding elements to the end frequently.

---

## Comparison Summary

| Feature              | `map`             | `unordered_map`    | `array`            | `vector`            |
|----------------------|-------------------|--------------------|--------------------|---------------------|
| Order of Keys/Items  | Sorted by key     | No specific order  | Fixed order (index)| Sequential (index)  |
| Time Complexity      | **O(log n)**      | **O(1)** (average) | **O(1)** access    | **O(1)** access     |
| Memory Efficiency    | Moderate          | More overhead      | Highly efficient   | Moderately efficient|
| Size Modification    | No                | No                 | No                 | Yes                 |
| Use Case             | Sorted key-value pairs | Fast lookups, key-value store | Fixed-size data   | Dynamic array       |

---

## Example Scenarios

- **`map`**: Use when you need sorted key-value pairs (e.g., a phonebook).
- **`unordered_map`**: Use for fast lookups without order (e.g., word count).
- **`array`**: Use when data size is fixed (e.g., days of the week).
- **`vector`**: Use when you need a dynamic, resizable array (e.g., a list of scores).

---

## Conclusion
Choosing the correct STL container depends on your specific use case:
- Use **`map`** for ordered data.
- Use **`unordered_map`** for fast key-based access.
- Use **`array`** for fixed-size collections.
- Use **`vector`** for dynamic, resizable arrays.

Understanding the strengths and limitations of each container helps you make efficient decisions in your C++ programming.

---


