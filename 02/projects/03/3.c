#include <stdio.h>

static const float pi = 3.142857f;

int main(void)
{
    printf("Please enter the radius of the sphere: ");
    int radius = 0;
    scanf("%d", &radius);

    float volume_of_sphere = (4.0f / 3.0f) * pi * (radius * radius * radius);
    printf("%.3f\n", volume_of_sphere);
    
    return 0;
}