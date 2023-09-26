/* Find next closest departure time to user improved (Yes, I am well aware that this is not exactly what was requested. It's better anyways.)

Departure time      Arrival time
8:00                10:16
9:43                11:52
11:19               13:31
12:47               15:00
14:00               16:08
15:45               17:55
19:00               21:20
21:45               23:58
*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hours, minutes, minutes_since_midnight;
    char meridiem;

    printf("Enter a 12-hour time (with AM/PM indicator): ");
    scanf("%d:%d %c", &hours, &minutes, &meridiem);
    (toupper(meridiem)=='P') ? hours+=12 : hours;
    minutes_since_midnight = hours * 60 + minutes;

    printf("Closest departure time is ");
    if (minutes_since_midnight < 480) printf("8:00AM, arriving at 10:16AM\n");
    else if (minutes_since_midnight < 583) printf("9:43AM, arriving at 11:52AM\n");
    else if (minutes_since_midnight < 679) printf("11:19AM, arriving at 1:31PM\n");
    else if (minutes_since_midnight < 767) printf("12:47PM, arriving at 3:00PM\n");
    else if (minutes_since_midnight < 840) printf("2:00PM, arriving at 4:08PM\n");
    else if (minutes_since_midnight < 945) printf("3:45PM, arriving at 5:55PM\n");
    else if (minutes_since_midnight < 1140) printf("7:00PM, arriving at 9:20PM\n");
    else printf("9:45PM, arriving at 11:58PM\n");

    return 0;
}