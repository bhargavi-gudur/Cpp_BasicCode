
# Fraction Addition in Simplest Form

This C++ program adds two fractions and outputs the result in its simplest form. It handles multiple test cases and ensures that the output is always reduced to the smallest numerator and denominator using the GCD (Greatest Common Divisor).

## Problem Statement

Given two fractions, `a/b` and `c/d`, you need to calculate their sum:
```
Sum = (a/b) + (c/d)
```
The result should be expressed in its simplest form.

### Example
**Input:**
```
2
5 7 4 9
1 500 2 1500
```

**Output:**
```
73 63
1 1000
```

---

## Constraints

- \( 1 \leq T \leq 10^4 \) (Number of test cases)
- \( 1 \leq a, b, c, d \leq 10^9 \) (Numerator and denominator values)
- Time Limit: 1 second

---

## Features

- Handles large numbers up to \( 10^9 \) efficiently.
- Outputs fractions in their simplest form using the GCD algorithm.
- Processes up to \( 10^4 \) test cases in a single run.

---

## Usage

### Prerequisites
You need a C++ compiler (e.g., GCC) installed on your system.

### Compilation
Use the following command to compile the program:
```bash
g++ -o fraction_addition fraction_addition.cpp
```

### Execution
Run the compiled program with:
```bash
./fraction_addition
```

### Input Format
1. The first line contains an integer \( T \), the number of test cases.
2. For the next \( T \) lines, each line contains four integers \( a, b, c, d \), representing two fractions \( a/b \) and \( c/d \).

### Output Format
For each test case, output the simplified sum of the fractions as two space-separated integers (numerator and denominator).

---

## Example

### Input
```
2
5 7 4 9
1 500 2 1500
```

### Output
```
73 63
1 1000
```

---

## How It Works

1. Reads the number of test cases \( T \).
2. For each test case:
   - Reads the fractions \( a/b \) and \( c/d \).
   - Computes the sum using the formula:
     \[
     	ext{Sum} = rac{a \cdot d + b \cdot c}{b \cdot d}
     \]
   - Simplifies the fraction by dividing the numerator and denominator by their GCD.
3. Outputs the simplified fraction.

---

## Code Highlights

- **Efficient GCD Calculation:** Utilizes the `__gcd` function from the `<algorithm>` library for simplification.
- **Handles Large Inputs:** Works with large numerators and denominators up to \( 10^9 \).
- **Optimized for Speed:** Processes up to \( 10^4 \) test cases within the time constraints.

---

## Author

This project was implemented as a coding exercise for handling fractions in a competitive programming environment. Feel free to contribute or use this for learning purposes.

---

