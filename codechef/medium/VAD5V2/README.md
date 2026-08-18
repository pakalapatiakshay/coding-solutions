# VAD5V2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Double datatype

Listen

If we want to store decimal values we use the  **`double`**  data type.

Syntax to declare a  **double** :

```
double radius = 8.9;

```

To print:

```
cout << radius;

// Output
// 8.9

```

### Task

Write a program which does the following:

- Find the area of a circle whose radius is 8.9. Take pi = 3.14
- Declare variables radius, pi and area and assign the relevant values to them
- Formula for area of a circle is Pi  *radius*  radius

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T17:37:55.846Z  

```c_cpp
#include <iostream>
using namespace std;

int main() {

    double pi = 3.14;
    double radius =8.9;
    double area = pi*radius*radius;
    cout << "The Area of the given Circle is " << area << endl;

}
```

---

[View on CodeChef](https://www.codechef.com/problems/VAD5V2)