# Programming Projects 3.06

Modify the `addfrac.c` program of Section 3.2 so that the user enters both fractions at the same time, separated by a plus sign:

```text
Enter two fractions separated by a plus sign: 5/6+3/4
The sum is 38/24
```

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

See `6.c` for the updated `addfrac.c` solution.
