#include <stdio.h>

int main(void)
{

    printf("Enter two fractions separated by a plus sign: ");
    
    int num1, denom1, num2, denom2, result_num, result_dom;
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_dom = denom1 * denom2;

    printf("The sum is %d/%d\n", result_num, result_dom);

    return 0;
}