# SYN7V2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Inserting space between outputs

Listen

If you want the output to be in the same line and have a space separate them,

- We can use " " to act as an empty space in between multiple outputs.
- We had seen previously that text has to be enclosed within double quotes during cout ("text")
- An empty space is a blank space between double quotes (" ")

For example, to print:  **2 2**, we can write

```
cout<< 2 << " " << 2;

```

### Task

Write a program to output 7 and 3 on a single line, space separated, using a single cout statement.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T17:32:57.028Z  

```c_cpp
#include <iostream>
using namespace std;

int main() {

  cout << 7 <<" "<<3;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/SYN7V2)