// e calculator

#include <stdio.h>

int main(void)
{
    int i, j, last;
    float e = 1.00f;

    printf("Insert a number: ");
    scanf("%d", &last);

    for (i = 1, j = 1; i <= last; i++){
        e += 1.00f / (j *= i);
    }

    printf("Result: %f\n", e);

    return 0;
}