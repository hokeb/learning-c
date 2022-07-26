#include <stdio.h>

int main(void)
{
    printf("Enter a date (mm/dd/yyyy): ");
    
    int m = 0;
    int d = 0;
    int y = 0;

    scanf("%d/%d/%d", &m, &d, &y);
    printf("You entered the date %04d%02d%02d\n", y, m, d);
}