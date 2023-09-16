// Beaufort scale wind force estimation

#include <stdio.h>

int main(void)
{
    float wind_force;

    printf("Enter wind force (in knots): ");
    scanf("%f", &wind_force);

    printf("Wind description: ");
    if (wind_force < 1)         printf("Calm\n");
    else if (wind_force < 3)    printf("Light air\n");
    else if (wind_force < 27)   printf("Breeze\n");
    else if (wind_force < 47)   printf("Gale\n");
    else if (wind_force < 63)   printf("Storm\n");
    else                        printf("Hurricane\n");

    return 0;
}