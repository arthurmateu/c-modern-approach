// Reverse a three-digit number, but with arithmethics

#include <stdio.h>

int main(void)
{
    int i, j, k, n;

    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    k = n/100;
    j = (n / 10) % 10;
    i = n%10;

    printf("The reversal is: %d%d%d\n", i, j, k);

    return 0;
}