#include <stdio.h>

int main(void)
{
    int one, two, three;
    float a, b, c;

    printf("First int: %d\nSecond int: %d\nThird int: %d\n", one, two, three);
    /* 
        RESULTS
        First int: -1247946904
        Second int: 0
        Third int: -1023460064
    */
    printf("First float: %f\nSecond float: %f\nThird float: %f\n", a, b, c);
    /* 
        RESULTS
        First float: 0.000000
        Second float: 0.000000
        Third float: 0.000000
    */

    return 0;
}