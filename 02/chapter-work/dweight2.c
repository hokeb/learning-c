#include <stdio.h>

static const int inches_per_pound = 166;

int main(void)
{
    int height;
    int length;
    int width;
    int volume;
    int weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: "),
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + (inches_per_pound - 1)) / inches_per_pound;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
    return 0;
}