#include <stdio.h>

int main(void) 
{
    printf("Enter value for x: ");

    int x = 0;
    scanf("%d", &x);

    int power_of_5 = x * x * x * x * x;
    int power_of_4 = x * x * x * x;
    int power_of_3 = x * x * x;
    int power_of_2 = x * x;

    int result = (3 * power_of_5) + (2 * power_of_4) - (5 * power_of_3) - (power_of_2) + (7 * x) - 6;
    printf("Value of 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6: %d\n", result);

    return 0;
}