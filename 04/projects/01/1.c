#include <stdio.h>

int main(void)
{
    printf("Enter a two-digit number: ");
    int num;
    scanf("%d", &num);

    printf("The reversal is: %d%d\n", num % 10, num / 10);

    return 0;
}
