# Exercise 4.02

If `i` and `j` are positive integers, does `(-i) / j` always have the same value as `-(i / j)`? Justify your answer.

## Solution

In C89, the implementation may be different depending on the platform, since it defers to the implementation on whether to round up or down. In the example in Chapter 4 -9 / 7 could be -2 or -1 in C89. In C99 however, they will be equal, as the result of division is always truncated towards 0.
