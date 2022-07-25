#include <stdio.h>

int main(void)
{
    printf("Enter amount of loan: ");
    float loan_amount = 0.0f;
    scanf("%f", &loan_amount);

    printf("Enter interest rate: ");
    float interest_rate = 0.0f;
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    float monthly_payment = 0.0f;
    scanf("%f", &monthly_payment);

    float monthly_interest_rate = (interest_rate / 100) / 12;
    float balance = loan_amount;

    balance = (balance - monthly_payment) + (balance * monthly_interest_rate);
    printf("Balance remaining after first payment: $%.2f\n", balance);

    balance = (balance - monthly_payment) + (balance * monthly_interest_rate);
    printf("Balance remaining after second payment: $%.2f\n", balance);

    balance = (balance - monthly_payment) + (balance * monthly_interest_rate);
    printf("Balance remaining after third payment: $%.2f\n", balance);

    return 0;
}