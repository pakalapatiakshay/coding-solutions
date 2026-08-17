# SYN11V2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Syntax

Listen

Let's learn about the different elements of a C++ program.

Let's take this example code:

```
#include <iostream>
using namespace std;

int main() {
    cout << 12 + 7;
}

```

- #include <iostream>: This line is including the contents of the iostream library. This library is necessary for input and output operations in C++. Think of it like giving your program the ability to speak and listen.
- using namespace std;: C++ has something called 'namespaces' which are used to organize code into logical groups. By stating using namespace std;, you're telling the program that you'll be using functions from std (standard) namespace.
- int main() {... }: This is the main function. Every C++ program must have a main function. This is the starting point of your program. When you run the program, the code inside the main function is what gets executed.
- cout << 12 + 7;: We have already learned about this in a previous lesson.

This code, when run, will simply display `19` on the screen, which is the sum of 12 and 7.

- Curly Braces {}: The opening curly brace { after main() indicate the start of main function. The closing curly braces } indicate the end of main function block.
### Task

Now that we have some idea of what these lines mean. I want you to write the complete code in the editor. It will help you in remembering all the lines.

Write the exact code which we discussed in this lesson, to output the sum of 12 and 7. If you miss anything like curly braces, you will get an error, don't worry, just ask about the error in Help tab.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T17:34:53.993Z  

```c_cpp
// Write complete code to print the sum of 12 and 7
#include<iostream>
using namespace std ;
int main (){
    cout << 12+7;
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SYN11V2)