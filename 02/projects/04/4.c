#include <stdio.h>

static const float percent = 0.05f;

int main(void)
{
    printf("Enter an amount: ");

    float amount = 0.0f;
    scanf("%f", &amount);

    amount = amount + (amount * percent);
    printf("With 5%% tax included: $%.2f\n", amount);

    return 0;
}