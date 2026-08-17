# LCPPCL27A

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Properties of Variables

Listen

We learned that variable is a labelled box which can store many different types of values. You can also change the value of a variable in your code.

For example

```
int age = 25;
cout << age << endl;

// Update age
age = 26 ;
cout << age << endl;

```

The above code will output

```
25
26

```

We are going to use variables all the time in the coming lessons. So let's learn a few more stuff about them.

Rules for C++ variable names:

- A variable name can only contain alphabets, numbers and underscores (ie. A-Z, a-z, 0-9, and _).
- A variable name cannot start with a number.
- A variable name cannot have spaces in between.
- Variable names are case-sensitive (age, Age and AGE are three different variables).
- Variable names cannot be any of the reserved keywords in C++ (e.g., int, float, while, class, return, etc.). These keywords have special meanings in the language and are used to define the syntax and structure of C++ programs.

Be sure to follow these rules when creating a variable to not get errors.

### Task

There is some code written in the editor to print the number 8. But the variable name is not following the rule. Can you spot the mistake and fix it?

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T17:36:15.721Z  

```c_cpp
#include <iostream>
using namespace std;

int main() {
   
    int number = 8;
    cout<<number<<endl;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL27A)