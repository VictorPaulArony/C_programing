# **Four-Digit Combinations Printer**

This C program prints all possible combinations of four-digit numbers where the first two digits are less than the second two digits.

## **Description**

The program generates and prints all combinations of two pairs of digits (`i`, `j` and `k`, `l`) where the first pair (`i`, `j`) is less than the second pair (`k`, `l`). Each combination is separated by a comma and a space, except the last combination.

# Explanation
- The program starts by including the standard I/O library with ` #include <stdio.h>.`
- In the main function, four integer variables i, j, k, and l are declared.
- Four nested for loops iterate through all digits from 0 to 9 for each variable:
    - The outermost loop controls the first digit i.
    - The second loop controls the second digit j.
    - The third loop controls the third digit k.
    - The innermost loop controls the fourth digit l.
- Inside the innermost loop, an if condition ensures that the first pair of digits (i, j) is less than the second pair of digits (k, l). If not, the loop continues to the next iteration.
- If the condition is satisfied, the combination is printed in the format ij kl.
- A check ensures that a comma and space are printed after each combination except the last one.
- Finally, a newline character is printed at the end.

## Output
When the program is run, it produces the following output:

```
00 01, 00 02, 00 03, ..., 98 99
```
(Note: The full output includes all valid combinations and is too long to display here.)

## Compilation and Execution
To compile and run the program, follow these steps:

1. Save the code to a file, for example, main.c.

2. Open a terminal and navigate to the directory containing main.c.

3. Compile the program using gcc:

```sh
gcc main.c -o main
```
## Run the compiled program:

```sh
./main
```
## Conclusion
This program demonstrates the use of nested loops and conditional logic to generate and print all possible combinations of four-digit numbers where the first pair of digits is less than the second pair. It serves as an example of how to manage multiple loops and conditions in C.

