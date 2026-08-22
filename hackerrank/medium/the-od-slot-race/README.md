# The OD Slot Race

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Maynak the Vice-President of Geeks For Geeks SRM RMP has finally reached the last stage of the OD race. Every student who applies for an OD chooses a task code representing the activity they are attending. Mayankis given the task codes of N students. A task code is considered exclusive if it appears exactly once. He wants to know the first exclusive task code in the order in which the students appear.

If no task code appears exactly once, print:-1

 **Input Format** 

The first line contains an integer: N The second line contains N space-separated integers representing the task codes.

 **Constraints** 

- 1 ≤ N ≤ 2 × 10^5
- 1 ≤ A[i] ≤ 10^9

 **Output Format** 

Print the first task code that occurs exactly once.

If there is no such task code, print: -1

 **Sample Input 0** 

```
7
4 2 4 3 2 7 3

```

 **Sample Output 0** 

```
7

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-22T13:12:08.733Z  

```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int n;
     cin >> n;
     long long a[20000]; 
     for (int i=0; i<n;i++){
        cin>> a[i];
     }
     
     for (int i =0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if (a[i] ==a[j]){
                count++;
            }
        }
        if (count ==1){
            cout << a[i];
            return 0;
        }
     }
     
     cout <<-1;
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/the-od-slot-race/problem)