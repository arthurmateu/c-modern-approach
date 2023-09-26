// Compute factorial of a positive integer
#include <stdio.h>

int main(void)
{
    int initial, n, result = 1;

    printf("Enter a positive number: ");
    scanf("%d", &initial);
    n = initial;

    while (n != 1) result*=n--;

    printf("Factorial of %d: %d\n", initial, result);

    return 0;
}

/*
    (a) The largest value of n for which the program correctly prints its factorial is 7. At 8, it will overflow and display a negative value.
    (b) 16.
    (c) 20.
    (d) 20.
    (e) The largest value of n for which the program correctly prints its factorial is 34. At 35, it will only display "inf".
    (f) 170.
    (g) 1754.
*/