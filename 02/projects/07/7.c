#include <stdio.h>

int main(void)
{
    printf("Enter a dollar amount: ");

    int amount = 0;
    scanf("%d", &amount);
    
    printf("$20 bills: %d\n", amount / 20);
    amount = amount - ((amount / 20) * 20);

    printf("$10 bills: %d\n", amount / 10);
    amount = amount - ((amount / 10) * 10);

    printf("$5 bills: %d\n", amount / 5);
    amount = amount - ((amount / 5) * 5);

    printf("$1 bills: %d\n", amount);

    return 0;
}