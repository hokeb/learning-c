#include <stdio.h>

int main(void) 
{
    printf("Enter phone number [(xxx) xxx-xxxx)]: ");

    int area_code, first_three, last_four;
    scanf("(%d) %d-%d", &area_code, &first_three, &last_four);

    printf("You entered %3.3d.%3.3d.%4.4d\n", area_code, first_three, last_four);

    return 0;
}