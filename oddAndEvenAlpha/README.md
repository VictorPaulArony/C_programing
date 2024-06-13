
# **Alternate Case Alphabet Printer**
This C program prints the alphabet in two different patterns using a for loop and conditional statements.

## **Description**
The program prints the alphabet twice:

1. The first line prints the alphabet with uppercase letters at even positions (1-based) and lowercase letters at odd positions.
2. The second line prints the alphabet with uppercase letters at odd positions (1-based) and lowercase letters at even positions.

## Explanation
- The program starts by including the standard I/O library with #include `<stdio.h>`.
- In the main function, a char variable a is initialized.
- The first for loop iterates over the characters from `'a'` to `'z'`. For each character:
- If the character's ASCII value is even `(a % 2 == 0)`, it is converted to uppercase.
- Otherwise, the character is printed as lowercase.
- A newline character is printed after the first pattern.
- The second for loop follows a similar structure but:
- If the character's ASCII value is odd `(a % 2 != 0)`, it is converted to uppercase.
- Otherwise, the character is printed as lowercase.
- Finally, another newline character is printed after the second pattern.
Output
- When the program is run, it produces the following output:
```BASH
aBcDeFgHiJkLmNoPqRsTuVwXyZ
AbCdEfGhIjKlMnOpQrStUvWxYz
```
## Compilation and Execution
To compile and run the program, follow these steps:

- Save the code to a file, for example, main.c.

- Open a terminal and navigate to the directory containing main.c.

- Compile the program using gcc:
```bash 
gcc main.c -o alternate_case_alphabet
```
Run the compiled program:

```bash
./alternate_case_alphabet
```
## How It Works
Character Case Conversion
- The expression` a - ('a' - 'A')` is used to convert a lowercase letter to its corresponding uppercase letter. This works because the difference between the ASCII values of 'a' and `'A'` is a constant offset `(32)`.
- This conversion is only applied to characters based on their ASCII value being even or odd.
## Loop and Conditional Logic
The loops iterate from `'a'` to `'z'`, ensuring all lowercase letters are processed.
Conditional statements check whether the character's ASCII value is even or odd, dictating whether to print the character in uppercase or lowercase.
## Conclusion
This program demonstrates basic loop and conditional logic in C, as well as ASCII-based character manipulation. It serves as a simple yet effective example of how to alternate between uppercase and lowercase characters in a sequence.

