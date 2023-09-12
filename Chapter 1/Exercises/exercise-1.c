#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}

/* The main issue of this example code is there not being anything returned. 
    To fix it, just append
        return 0;
    below the printf statement.
*/