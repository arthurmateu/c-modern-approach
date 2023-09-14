// Reverse a two-digit number

#include <stdio.h>

int main(void)
{
    int i, j;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &i, &j);

    printf("The reversal is: %d%d\n", j, i);

    return 0;
}