// Conver to octal

#include <stdio.h>

int main(void)
{
    int n, a, b, c, d, e;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);

    // There's probably a better way to implement this, a one-liner probably
    e = n%8;
    d = (n/=8)%8;
    c = (n/=8)%8;
    b = (n/=8)%8;
    a = (n/=8)%8;

    printf("The reversal is: %d%d%d%d%d\n", a, b, c, d, e);

    return 0;
}