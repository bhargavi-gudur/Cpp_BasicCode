# Enum WeekDays Project

## Overview

This project demonstrates the use of enumerations in C++ to represent the days of the week. The `enum_weekDays` function processes and prints out the days of the week using an array of enumerations.

## Files

- **main.cpp**: Contains the main function and the `enum_fun` function.

## Code Explanation

1. **Include Headers**
    ```cpp
    #include <iostream>
    ```

2. **Define Constants**
    ```cpp
    #define N 7
    ```

3. **Namespace**
    ```cpp
    using namespace std;
    ```

4. **Enum Declaration**
    ```cpp
    enum weekDays
    {
        sun = 1,
        mon,
        tue,
        wed,
        thur,
        fri,
        sat
    };
    ```

5. **Array Initialization**
    ```cpp
    weekDays enum_var[N] = {sun, mon, tue, wed, thur, fri, sat};
    ```

6. **Function Prototype**
    ```cpp
    void enum_fun();
    ```

7. **Main Function**
    ```cpp
    int main()
    {
        enum_fun();
        return 0;
    }
    ```

8. **Function Definition**
    ```cpp
    void enum_fun()
    {
        int loop;
        for (loop = 0; loop < N; loop++)
        {
            enum_var[loop] = static_cast<weekDays>(enum_var[loop]);
            cout << "weekdays :" << enum_var[loop] << endl;
        }
    }
    ```

## How to Run

1. Compile the code using a C++ compiler, e.g., `g++ main.cpp -o objenum`.
2. Run the executable, e.g., `./objenum`.

## Notes

- The enumeration `weekDays` starts from `sun` with a value of `1`.
- The `enum_fun` function iterates through the `enum_var` array and prints each day.


