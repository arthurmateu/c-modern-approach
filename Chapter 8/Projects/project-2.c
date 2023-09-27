/* Checks numbers for repeated digits and shows how many times each digit appears in the number */

#include <stdio.h>

int main(void)
{
    int i, digit, digits[10], digit_seen[10] = {0};
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit])
            break;
        digit_seen[digit]++;
        n /= 10;
    }

    printf("Digit:\t\t");
    for (i = 0; i < 10; i++) digits[i] = i, printf(" %d", digits[i]);
    printf("\n");

    printf("Occurrences:");
    for (i = 0; i < 10; i++) printf(" %d", digit_seen[i]);
    printf("\n");

    return 0;
}