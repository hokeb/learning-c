#include <stdio.h>

int main(void)
{
    printf("Enter an item number: ");
    int item_num = 0;
    scanf("%d", &item_num);

    printf("Enter unit price: ");
    float unit_price = 0;
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    int d, m, y;
    scanf("%d/%d/%d", &d, &m, &y);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t%.2d/%.2d/%.4d\n", item_num, unit_price, d, m, y);

    return 0;
}