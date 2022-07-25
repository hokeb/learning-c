# Exercise 2.01

Create and run K&R's famous "hello, world" program:

```c
#include <stdio.h>

int main(void)
{
    printf("Hello world!\n");
}

```

Do you get a warning message from the compiler? If so, what's needed to make it go away?

## Solution

Nothing happens when I compile with the C99 standard. But when I use C89, I get a warning.

```txt
$ gcc 1.c -o 1 -Wall -W -Werror -pedantic -std=89
1.c: In function 'main':
1.c:6:1: error: control reaches end of non-void function [-Werror=return-type]
    6 | }
      | ^
cc1: all warnings being treated as errors

$ gcc 1.c -o 1 -Wall -W -Werror -pedantic -std=c89
(nothing shown, compiles successfully)
```
