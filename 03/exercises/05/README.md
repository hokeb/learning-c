# Exercise 3.05

Suppose that we call `scanf` as follows:

```c
scanf("%f%d%f", &x, &i, &y);
```

If the user enters:

```text
12.3 45.6 789
```

what will be the values of `x`, `i`, and `y` after the call? (Assume that `x` and `y` are `float` variables and `i` is an `int` variable).

## Solutions

`x` will be 12.3\
`i` will be 45 - `scanf` will stop after the decimal point\
`y` will be 0.6 - `scanf` will find the decimal point and the next number which is 6 and then a white space and stop, leaving the remaining for the next call to `scanf`
