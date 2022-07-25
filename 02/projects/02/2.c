#include <stdio.h>

static const float pi = 3.142857f;
static const int radius = 10;

int main(void)
{
    float volume_of_sphere = (4.0f / 3.0f) * pi * (radius * radius * radius);
    printf("%.3f\n", volume_of_sphere);
    
    return 0;
}