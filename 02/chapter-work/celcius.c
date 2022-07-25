#include <stdio.h>

static const float freezing_pt = 32.0f;
static const float scale_factor = 5.0f / 9.0f;

int main(void)
{
    float fahrenheight, celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheight);
    
    celsius = (fahrenheight - freezing_pt) * scale_factor;

    printf("Celcius equivalent: %.1f\n", celsius);

    return 0;
}