#include <stdio.h>

int main(void)
{
    float x, polynomial;
    printf("Enter a value for X: ");
    scanf("%f", &x);

    polynomial = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * x - 6;
    printf("%.2f\n", polynomial);

    return 0;
}