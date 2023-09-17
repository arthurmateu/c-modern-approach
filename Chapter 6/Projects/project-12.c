// e calculator but with epsilon
#include <stdio.h>

int main(void) {

    int i, j;
    float e = 1.00f, epsilon, term;

    printf("Insert epsilon: ");
    scanf("%f", &epsilon);

    for (i = 1, j = 1, e , term = 1.0f; term > epsilon; i++) {
        term = (1.00f / (j *= i));
        e += term;
    }
    printf("Result: %f\n", e);

    return 0;
}