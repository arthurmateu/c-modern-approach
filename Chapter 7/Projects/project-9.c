// 12-hour to 24-hour
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hours, minutes, minutes_since_midnight;
    char meridiem;

    printf("Enter a 12-hour time (with AM/PM indicator): ");
    scanf("%d:%d %c", &hours, &minutes, &meridiem);
    (toupper(meridiem)=='P') ? hours+=12 : hours;

    printf("%d:%.2d\n", hours, minutes);

    return 0;
}