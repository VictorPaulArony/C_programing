# **IsNegative Function**

This C program contains a function that checks whether a given integer is negative and prints `T` for true if the number is negative, and `F` for false if the number is zero or positive.

## **Description**

The program defines a function `IsNegative` which:
- Accepts an integer parameter.
- Prints `T` if the parameter is negative.
- Prints `F` if the parameter is zero or positive.

The `main` function tests this functionality with three different inputs: `1`, `0`, and `-1`.

## **Code**

```c
#include <stdio.h>

int IsNegative(int a) {
    if (a < 0) {
        printf("T\n");
    } else {
        printf("F\n");
    }
}

int main() {
    IsNegative(1);
    IsNegative(0);
    IsNegative(-1);
    return 0;
}
```
## Explanation
The IsNegative function takes an integer a as an argument.
Inside the function, it checks if a is less than 0:
If a is negative, it prints `T`.
Otherwise, it prints `F`.
The main function calls IsNegative with three different values to demonstrate its functionality.
## Output
When the program is run, it produces the following output:

```r
F
F
T
```
## Compilation and Execution
To compile and run the program, follow these steps:

- Save the code to a file, for example, main.c.

- Open a terminal and navigate to the directory containing main.c.

-  Compile the program using gcc:

```sh
$ gcc main.c -o is_negative
$ Run the compiled program:
```
```sh
./is_negative
```
## Conclusion
This simple program demonstrates how to use a function to check whether a number is negative and how to use conditional statements to print different outputs based on the value of an integer. The program is a straightforward example of function usage and conditional logic in C.







