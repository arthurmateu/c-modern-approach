#include <stdio.h>

#define PI 3.14f
#define FRACTION (4.0f/3.0f)

int main(void)
{
    float radius;
    printf("Enter sphere radius: ");
    scanf("%f", &radius);

    printf("Sphere volume: %.2f\n", FRACTION * PI * radius * radius * radius);

    return 0;
}