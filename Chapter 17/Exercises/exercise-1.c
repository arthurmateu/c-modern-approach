#include <stdlib.h>

void *my_malloc(int n)
{
    void *p;
    if (!(p = malloc(n))) {
        printf("Allocation failed");
        exit(EXIT_FAILURE);
    }
    return p;
}