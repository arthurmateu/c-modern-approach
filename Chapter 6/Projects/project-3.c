// Find lowest terms of fraction
#include <stdio.h>

int main(void)
{
    int numerator, denominator, m, n, remainder;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator); 

    n = numerator, m = denominator;
    while (n != 0){
        remainder = m % n;
        m = n;
        n = remainder;
    }
    numerator /= m, denominator /= m;

    printf("In lowest terms: %d/%d\n", numerator, denominator);

    return 0;
}