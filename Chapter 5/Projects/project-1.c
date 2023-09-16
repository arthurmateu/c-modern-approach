// Count digits in number, assuming no more than 4

#include <stdio.h>

int main(void)
{
    int i;

    printf("Enter a number: ");
    scanf("%d", &i);

    printf("The number ");
    if (i/1000 > 1) printf("%d has 4 digits\n", i);
    else if (i/100 > 1) printf("%d has 3 digits\n", i);
    else if (i/10 > 1) printf("%d has 2 digits\n", i);
    else printf("%d has 1 digit\n", i);

    return 0;
}