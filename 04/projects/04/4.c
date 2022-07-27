#include <stdio.h>

int main(void)
{
    printf("Enter a number between 0 and 32767: ");
    int num;
    scanf("%d", &num);

    printf("%d%d%d%d%d\n", 
        (num / 4096) % 8, 
        (num / 512) % 8, 
        (num / 64) % 8, 
        (num / 8) % 8, 
        num % 8
    );

    return 0;
}