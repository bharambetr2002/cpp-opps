# C++ Notes

## Introduction
- **C++** is one of the most used languages in game development.
- It is an **extension of C** and was developed by **Bjarne Stroustrup**.
- Provides **high-level control** over system resources and memory.
- Used in **operating systems, GUI applications, and embedded systems**.

### Major Difference from C
- **C++ supports classes and objects** (Object-Oriented Programming).

---

## Syntax Overview

```cpp
#include <iostream>  // Header file for input and output functions
using namespace std; // Namespace for standard library objects and variables
```

- **Statements in C++**: A list of instructions to be executed.
- **New line in C++**: `\n` or `<< endl`.
  - `\n` is an **escape sequence** that moves the cursor to the beginning of the next line.
  
### Escape Sequences
| Escape Sequence | Description |
|----------------|-------------|
| `\n` | Newline |
| `\t` | Horizontal tab |
| `\\` | Insert a backslash `\` |
| `\"` | Insert a double quote `"` |

---

## Variables in C++

### Basic Data Types
| Type   | Description |
|--------|-------------|
| `int` | Integer (whole numbers) |
| `double` | Floating point number (high precision) |
| `float` | Floating point number (lower precision) |
| `char` | Single character |
| `string` | Sequence of characters |
| `bool` | Boolean (true/false) |

### Float vs Double
- `float`: ~6-7 decimal places
- `double`: ~15 decimal places (preferred for accuracy)

### Boolean Values
| Boolean Value | Meaning |
|--------------|---------|
| `true` | 1 |
| `false` | 0 |

### Declaring Variables
```cpp
type variableName = value;
```

### Constants
- **Unchangeable variable** (value cannot be modified after initialization).
```cpp
const type variableName = value;
```

---

## User Input in C++
- **`cout`** ("see-out") → Used for output (`<<` insertion operator).
- **`cin`** ("see-in") → Used for input (`>>` extraction operator).

Example:
```cpp
int age;
cout << "Enter your age: ";
cin >> age;
cout << "Your age is " << age;
```

---

## Strings in C++

### Declaration & Usage
```cpp
#include <string>
string greeting = "Hello";
cout << greeting;
```

### String Operations
- **Concatenation:** `append()`
- **Length:** `string.length()`
- **Reading full line:** `getline(cin, variableName);`

### C-Style Strings
- Created using `char` arrays.
```cpp
char greeting[] = "Hello";
```

---

## Conditional Statements

### If-Else
```cpp
if (condition) {
    // code
} else if (condition) {
    // code
} else {
    // code
}
```

### Short-Hand If-Else
```cpp
variable = (condition) ? expressionTrue : expressionFalse;
```

### Switch Case
```cpp
switch(expression) {
    case x:
        // code block
        break;
    case y:
        // code block
        break;
    default:
        // default code
}
```

---

## Loops in C++

### While Loop
```cpp
while (condition) {
    // code block
}
```

### Do-While Loop
```cpp
do {
    // code block
} while (condition);
```

### For Loop
```cpp
for (initialization; condition; increment) {
    // code block
}
```

### For-Each Loop (Range-Based Loop)
```cpp
for (type variableName : arrayName) {
    // code block
}
```

---

## Arrays & Vectors

### Declaring an Array
```cpp
type arrayName[size] = {values};
```

### Dynamic Arrays (Vectors)
```cpp
#include <vector>
vector<string> cars = {"Volvo", "BMW", "Ford"};
cars.push_back("Tesla");
```

### Array Size Calculation
```cpp
sizeof(arrayName) / sizeof(arrayName[0]);
```

---

## Structures in C++

```cpp
struct MyStructure {
    int myNum;
    string myString;
};
```

---

## Pointers & References

### References
```cpp
string food = "Pizza";
string &meal = food; // meal is now a reference to food
```

### Pointers
```cpp
string food = "Pizza";
string* ptr = &food; // Pointer to food
```

### Dereferencing
```cpp
cout << *ptr; // Outputs value at pointer address
```

---

## Functions in C++

### Function Declaration & Definition
```cpp
returnType functionName(parameters) {
    // code
}
```

### Default Parameters
```cpp
void myFunction(string country = "Norway") {
    cout << country << "\n";
}
```

### Pass by Reference
```cpp
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}
```

### Function Overloading
```cpp
int myFunction(int x);
float myFunction(float x);
double myFunction(double x, double y);
```

---

## Variable Scope

### Local Scope
- Variable declared inside a function **cannot be accessed outside** it.

### Global Scope
- Variable declared outside any function can be used **throughout the program**.

---

## Recursion

- A function calling **itself** to solve complex problems by breaking them into smaller sub-problems.

Example:
```cpp
int sum(int k) {
    if (k > 0) {
        return k + sum(k - 1);
    } else {
        return 0;
    }
}
```

---

## Additional Topics to Explore
- **Enumerations (Enums)**
- **Memory Management** (`new`, `delete`)
- **File Handling** (`ifstream`, `ofstream`)
- **Exception Handling** (`try`, `catch`, `throw`)

---
