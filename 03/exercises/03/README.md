# Exercise 3.03

For each of the following pairs of `scanf` format strings, indicate whether or not the two strings are equivalent. If they're not, show how they can be distinguished.

(a) `"%d"` versus `" %d"`\
(b) `"%d-%d-%d"` versus `"%d -%d -%d"`\
(c) `"%f"` versus `"%f "`\
(d) `"%f,%f"` versus `"%f, %f"`

## Solution

(a) equivalent\
(b) not equivalent - `scanf` will look for a `-` and find a space and terminate in the second string\
(c) not equivalent - `scanf` will expect a non-whitespace character to be entered prior to ending the statement
(d) eqivalent - white space will be ignored until finding the next conversion specifier or ordinary character
