# Exercise 2.10

In the dweight.c program, which spaces are essential?

dweight.c:

```c
#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;
    
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
```

## Solution

1. The space after the directive `#include <stdio.h>`

2. The space between `int` and `main`

3. The space between `int` and `height`

4. The spaces between `height`, `=`, and `8`

5. The spaces between `width`, `=`, and `10`

6. The spaces between `volume`, `=`, and `height`

7. The space between `weight` and `=`

8. The space between `return` and `0`

I'd also argue the space in the format strings is essential to convey proper English meaning
