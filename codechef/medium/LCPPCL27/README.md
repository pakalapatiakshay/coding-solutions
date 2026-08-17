# LCPPCL27

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Declaring a variable

Listen

When we declare a variable, we should also specify what type of variable it is. This is known as data type, basically meaning what type of data we are going to store in a variable.

Here are all the major data types and what they store in C++:

Data Type	Description	Range(of values they can store)	Size(in Bytes)
int	Stores integers	-2,147,483,648 to 2,147,483,647	4
long long	Stores large integers	-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807	8
float	Stores decimal numbers	1.2e-38 to 3.4e38	4
double	Stores large decimal numbers	2.3e-308 to 1.7e308	8
char	Stores single character	-128 to 127	1
bool	Stores `true` or `false`	`true` or `false`	1

 **Example declarations:** 

```
   int num = 100000;
   long long large_num = 100000000000000;
   float pi = 3.14;
   double euler_number = 2.718281828459045;
   char c = 'A';
   bool check = true;

```

 **Note:**  In computer memory, a `bit` is the smallest unit of data, representing a binary digit with values $0$ or $1$, whereas a `byte` consists of $8$ bits and is used to represent and store data in memory.

### Task

Write a program which does the following:

- Create an integer variable named number.
- Assign the value 19 to number.
- Output the value of number.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T17:36:03.183Z  

```c_cpp
#include <iostream>
using namespace std;

int main() {
  
   
 int number = 19;
    
    // Print the variable
    cout <<number;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL27)