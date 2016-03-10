# Project2-CS131-

Project 2
Checking for nested brackets in a text file.

<b>Introduction</b>

Most programming languages require that brackets (round brackets, square brackets, curly braces) are "balanced" and "nested." This means that every opening bracket should have a matching closing bracket of the same type and that two matching pairs should completely contain one inside the other. Thus, {()} and [() ()] are examples of nested brackets, while {(}) and (())) are not nested.

These rules hold for C++ too. However, brackets that appear within comments and quoted strings do not count towards nesting. Thus, these are valid:

int i = m * (5 + n); // comment: this ( does not count
cout << "Sum of [4, 3, ... = " << (4 + (3 + (2 + 1))) << endl;

<b>The problem</b>

Write a program that takes as its input a text file that contains some C++ code. Your program should determine if all brackets within the text file are nested with the exception of those appearing within comments and quoted strings. When your program detects a mismatched pair, it should print a message indicating the location (line numbers and column numbers) of the mismatch. If all pairs are matched, the program should indicate that at the end.

<b>Data structures</b>

You can write your own implementation of a data structure, use an implementation developed in class, or a container from the C++ Standard Library

<b>File input/output</b>

Your program should read the input text from a file. The skeleton program that is included here has code to read a text file line by line. This code can take the file name from the command line or ask the user. Note that code running within Visual Studio considers the project directory as the default directory in which to open files.

<b>Simplifying assumptions</b>

Only round brackets (), square brackets [], and curly braces {} need to be matched.
The maximum depth of nesting is 80, i.e., there could be at most 80 pairs contained one within the other (note that there is no limit to the total 
number of brackets).
Comments will be indicated only with // (not with /* ... */).
Strings within quotes will be confined to one line.
Skeleton code and examples

You have been supplied with a brackets_check.cpp C++ source file. The file is complete and should compile cleanly. This file has code to read a text file and can be used as a starting point for your code.

<b>Examples</b>
You are also provided with a few example text files. The appropriate outputs for these inputs are:

Output for example1.cpp

File to check:example1.cpp
No parenthesization errors.
Output for example2.cpp

File to check:example2.cpp
Line 65: error at column 40:
            (_minute == right._minute)));
                                       ^
  close paren ) does not match corresponding open paren { from row 61 and column 51
Output for example3.cpp

File to check:example3.cpp
Unmatched open paren at row 39 and column 17
Output for example4.cpp

File to check:example4.cpp
No parenthesization errors.
