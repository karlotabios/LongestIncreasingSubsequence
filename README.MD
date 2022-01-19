# Longest Increasing Subsequence (ver 0.1)

## Ver 0.1
Initial Version. Has some test code to do with C++ std::list<>


## Todo
Implement the recursive function that solves the problem
1. Implement the base case solution
2. Implement the solution for other cases


Problem:
--------
Given an integer array, return the length of the longest strictly increasing subsequence.

> A **subsequence** is a sequence that can be derived from an array by deleting some or no elements without changing the order of the remaining elements.

Subsequence example:
--------------------
`[3,6,2,7]` is a subsequence of the array `[0,3,1,6,2,2,7]`


Longest Increasing Subsequence example:
--------------------------------------
Input: `[10,9,2,5,3,7,101,18]`

Output: `4`

Explanation: The longest increasing subsequence is `[2,3,7,101]`, therefore the length is `4`.


How to compile the program
--------------------------
Option 1:
Run a Build Task in VSCode (Terminal > Run build Task...)

Option 2:
Run a makefile or a batch file that calls the GNU C++ Compiler
```
g++ -c lis.cpp -o lis.o
g++ lis.o -o lis
```


How to execute the program correctly
--------------------------------
1. Create an input file containing the sequence of numbers. Use the file name "input.txt" following the format of the example below:
```
1 2 3 4 101 102 90
```

2. Run the program via terminal.