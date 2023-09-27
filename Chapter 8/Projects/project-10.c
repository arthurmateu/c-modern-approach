// Find next closest departure time to user (Yes, I am well aware that this is not exactly what was requested. It's better anyways.)
// Answer will be given in 24-hour time

#include <stdio.h>

int main(void)
{
    int hours, minutes, minutes_since_midnight, departure_hour, departure_minutes, arrival_hour, arrival_minutes, 
    departure[8] = {480, 583, 679, 767, 840, 945, 1140, 1305},
    arrival[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);
    minutes_since_midnight = hours * 60 + minutes;

    printf("Next departure time is ");
    for (int i = 0; i < 8; i++) {
        if (minutes_since_midnight < departure[i]) {
            departure_hour = departure[i] / 60;
            departure_minutes = departure[i] % 60;
            arrival_hour = arrival[i] / 60;
            arrival_minutes = arrival[i] % 60;
            printf("%.2d:%.2d, arriving at %.2d:%.2d.\n", departure_hour, departure_minutes, arrival_hour, arrival_minutes);
            break;
        }
    }

    return 0;
}