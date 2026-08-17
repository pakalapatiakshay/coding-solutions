# SYN5V2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Outputs In Separate Lines

Listen

When we use multiple cout statements, everything gets printed on one line.

```
cout << 20;
cout << 40;

// Output:
// 2040

```

What to do if we want to print 20 and 40 on separate lines?

We can use  **`<< endl`**  to have the next outputs be on the next line. It is like pressing the Enter / Return key on your keyboard, but for the output displayed.

Example:

```
cout << 20 << endl;
cout << 40 << endl;

// Output:
// 20
// 40

```

### Task

Write a program which does the following

- Output the sum of 3 and 4 using cout.
- Output the sum of 1 and 2 using cout, but on a new line.

 **Expected Output** 

```
7
3

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T17:29:37.242Z  

```c_cpp
#include <iostream>
using namespace std;

int main() {

  cout << 3+4<< endl;
  cout << 2+1;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/SYN5V2)