# Exercise 2.04

Write a program that declares several `int` and `float` variables -- without initializing them -- and then prints their values. Is there any pattern to the values? (Usually there isn't.)

## Solution

See `4.c` for the solution. 

The only pattern is the first `int` seems to always be 1, while the floats are `nan`. The second int is always different.

## Results

Ran with `$ gcc 4.c -o 4 -Wall -W -pedantic -std=c99`

```txt
1
102985824
nan
nan
```

```txt
1
57024608
nan
nan
```

```txt
1
171442272
nan
nan
```