# 1) Original program
The original progam does the following: An implementation of the so-called "Russian Peasant" or "Ancient
Egyptian" method for multiplication.

Here is how the algorithm works. Suppose you wish to multiply two integers, A and B together (no decimals allowed).
You would first write the values of A and B side-by-side in two columns.
Then you create a new row with twice the previous value in the A column, and half the previous value (truncated) in the B column.
Continue this doubling/halving step until the value in the B column is zero.
Finally, add up all of the values in the A column that go with an odd value in the B column. That sum will be the product of the original A and B values.

# 2) What files are part of the original function?
The original function is found in the "multiplier.py" file.

# 3) What files are part of your converted solutions?
I have FOUR files that are part of my converted solution. 
The files are "functions.cpp" , "functions.h" , "test.cpp" and "main.cpp".
The main program is in "main.cpp"
The supporting functions are in "functions.cpp"
Testing for the supporting functions is in "test.cpp"
The additional file is "functions.h".

# 4) What challenges did you have converting your program?
THe biggest challenge I faced when converting the code from Python to C++ was with the 
functions. I was having issues getting the functions to work across files, even through they were working fine in
their individual files. 

# 5) What language was better suited for the task?
I think C++ was better suited for this task because the code was easier to create fluidity with. Granted, it is also important
to consider that I have much more coding experience now than I did when I wrote the code
for my Python program. 