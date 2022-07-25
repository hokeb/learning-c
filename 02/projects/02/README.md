# Programming Projects 2.02

Write a program that computes the volume of a sphere with a 10-meter radius, using the formula `v = 4/3πr³`. Write the fraction `4/3` as `4.0f/3.0f`. (Try writing it as `4/3`. What happens?)

## Solution

See `2.c` for the solution

When the program is changed to write the fraction as `4/3` the result changes. This is due to `4/3` truncating the decimal value and becoming `1`. When it is `4.0f/3.0f` the result is `1.33`.
