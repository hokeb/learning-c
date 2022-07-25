# Exercise 3.04

Suppose that we call `scanf` as follows:

```c
scanf("%d%f%d", &i, &x, &j);
```

If the user enters:

```text
10.3 5 6
```

what will be the values of `i`, `x`, and `j` after the call? (Assume that `i` and `j` are `int` variables and `x` is a `float` variable).

## Solutions

`i` will be 10 - `scanf` will stop after seeing a decimal place because of `%d`\
`x` will be 0.3 - `scanf` will take the first floating point number it finds\
`j` will be 5 - the next digit after and will stop after the white space
