# VAD8V2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Write a program which does the following

- Find the area of a square of side $14cm.$
- Also, find the cost of painting the square if the paint costs is $$7cm/sq.$
- Initialise the following variables in your program and use them in the computation s to store the length of side the square area to store the area of the square cost to store the cost of painting
- Output area and cost to the console on separate lines.
- Note: Include the character "$" with the cost without any space
### Sample 1:
Input
Output

```
 
```

```
196
$1372
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-18T10:21:49.860Z  

```c_cpp
#include <iostream>
using namespace std;

int main() {
    int s = 14;
   int area = s*s;
    int cost = 7 *area;
    
    cout << area << endl;
    cout << "$" <<cost;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/VAD8V2)