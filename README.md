For this lab assignment, write a simple program which prompts the user to enter a four-digit number and outputs the word equivalent of each digit.  For example, if the user enters ...

9502

... the program should output ...

NINE FIVE ZERO TWO

... and if the user enters a value that is not a digit, it should output "UNKNOWN".

A few hints and tips to get you started:

Remember that C++ allows you to read characters from standard input (cin) into variables according to their data type.  You can read the user's digits into a single int value, of course, but then you'll have to "disassemble" the number from left to right to output the digits.  You may find it easier to read the digits as individual characters instead.  See the lecture slides for examples of how to use cin with char variables.
Your program will need to compare the value of each digit to every one of the possible numeric values in order to print the corresponding word.  You may find a switch statement to be the most convenient selection statement to use for this.  If you decide to use switch, you should use a default case to print "UNKNOWN" if the user enters a value other than a number.
This assignment is worth 50 points and is due by the end of the day on Tuesday, September 15th Friday, September 18th.
