# SYN6AV2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Multiple outputs using a single line

Listen

You can also have multiple outputs together in a single `"cout"` command.
They are joined together using the  **`"<<"`**  symbol.

So, for example,

```
cout << 2;
cout << endl;
cout << 3;

```

and

```
cout << 2 << endl << 3;

```

are equivalent.

### Task

Write a program to output 7 and 3 on two lines, using a single cout statement.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T17:32:30.788Z  

```c_cpp
#include <iostream>
using namespace std;

int main() {
    // Print 7 and 3 on two lines
    cout << 7 << endl << 3;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SYN6AV2)