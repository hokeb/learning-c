# Exercise 3.06

Show how to modify the `addfrac.c` program of Section 3.2 so that the user is allowed to enter fractions that contain spaces before and after each `/` character

Original `addfrac.c`:

```c
#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_dom;

    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_dom = denom1 * denom2;

    printf("The sum is %d/%d\n", result_num, result_dom);

    return 0;
}
```

## Solution

See `6.c` for an updated solution
