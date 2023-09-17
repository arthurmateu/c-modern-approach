// Find largest in a series of numbers entered by the user
#include <stdio.h>

int main(void)
{
    float current, largest;

    printf("Enter a number: ");
    scanf("%f", &current); 
    largest = current; // Largest will assume the first number input

    while (current > 0) {
        printf("Enter a number: ");
        scanf("%f", &current);
        if (current > largest) largest = current;
    } 

    printf("The largest number entered was %.2f\n", largest);

    return 0;
}