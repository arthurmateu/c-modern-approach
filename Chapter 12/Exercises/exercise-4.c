// Slightly edited from page's 222 example
#include <stdbool.h> /* C99 only */

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int *top_ptr;

void make_empty(void)
{
    top_ptr = &contents[0];
}

bool is_empty(void)
{
    return top_ptr == &contents[0];
}

bool is_full(void)
{
    return top_ptr == &contents[STACK_SIZE];
}