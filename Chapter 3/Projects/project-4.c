/* Display phone number */

#include <stdio.h>

int main(void)
{
    int area, central_office, line_number;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area, &central_office, &line_number);

    printf("You entered  %d.%d.%d\n", area, central_office, line_number);

    return 0;
}