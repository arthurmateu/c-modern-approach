// Display time in 12-hour form

#include <stdio.h>

int main(void)
{
    int hours, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    printf("Equivalent 12-hour time: ");
    if (hours > 12) printf("%d:%.2d PM\n", hours - 12, minutes);
    else printf("%d:%.2d AM\n", hours, minutes);

    return 0;
}