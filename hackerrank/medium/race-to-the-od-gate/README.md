# Race To The OD Gate

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Saksham the Technical Lead of Geeks For Geeks SRM RMP has reached the OD verification gate. There are N students standing in a queue. Each student has a certain verification score. The gate allows SAKSHAM to select two students whose combined score is exactly K. The queue is already sorted in non-decreasing order. Saksham wants to find whether such a pair exists as quickly as possible. Your task is to determine whether there are two different positions whose scores add up to exactly K.

 **Input Format** 

The first line contains two integers: N, K The second line contains N space-separated integers representing the verification scores.

 **Constraints** 

- 2 ≤ N ≤ 2 × 10^5
- 1 ≤ K ≤ 10^9
- 1 ≤ A[i] ≤ 10^9
- The array is sorted in non-decreasing order.

 **Output Format** 

If a pair exists, print: YES Otherwise, print: NO

 **Sample Input 0** 

```
6 13
1 3 4 6 9 11

```

 **Sample Output 0** 

```
YES

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-22T13:13:14.216Z  

```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;


int main() {
       int n;
       long long k;
       cin >> n >> k;
       vector<long long> A(n);
       for (int i =0; i<n ;i++){
        cin >> A[i];
       }
       int left =0;
       int right = n-1;
       while( left < right){
        long long sum = A[left] + A[right] ; 
          if ( sum == k){
            cout<< "YES";
            return 0;
          }
          else if(sum < k) {
            left++;
            
          }
          else {
            right--;
          }
          }
        cout <<"NO";
        return 0;
      
        }
        

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/race-to-the-od-gate/problem)