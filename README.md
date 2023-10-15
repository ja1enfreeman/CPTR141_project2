# Russian Peasant Multiplication

## Original Program
The original program implements the "Russian Peasant" or "Ancient Egyptian" method for multiplication. This method is used to multiply two integers, A and B, without decimals. Here's how it works:

1. Write the values of A and B side-by-side in two columns.
2. Create a new row with twice the previous value in the A column and half the previous value (truncated) in the B column.
3. Continue this doubling/halving step until the value in the B column becomes zero.
4. Finally, add up all the values in the A column that correspond to an odd value in the B column. This sum represents the product of the original A and B values.

## Original Function
The original function for Russian Peasant Multiplication is located in the "multiplier.py" file.

## Converted Solutions
The converted solution includes multiple files:

- **main.cpp:** Contains the main program for Russian Peasant Multiplication.
- **functions.cpp:** Contains supporting functions required for the multiplication process.
- **test.cpp:** This file is for testing the supporting functions.
- **functions.h:** An additional header file for the supporting functions.

## Conversion Challenges
The main challenge during the conversion process from Python to C++ was related to the functions. Integrating the functions across files was problematic, despite working correctly in their respective individual files.

## Preferred Language
C++ was chosen for this task as it offered a more efficient and fluid coding experience. Additionally, the coder's increased experience played a role in the decision, as it allowed for smoother code development in C++ compared to when the Python version was originally written.
