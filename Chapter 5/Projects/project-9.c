// Check which date comes earlier

#include <stdio.h>

int main(void)
{
    int day_1, day_2, month_1, month_2, year_1, year_2;

    printf("Enter the first date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &day_1, &month_1, &year_1);
    printf("Enter the second date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &day_2, &month_2, &year_2);

    //There's probably a better way to implement this. Namely, the printf's are being repeated unnecessarily, but I don't know any better way to implement it at the moment
    year_1 == year_2
    ? month_1 == month_2
        ? day_1 == day_2
            ? printf("Both dates are equal")
            : day_1 < day_2
                ? printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", day_1, month_1, year_1, day_2, month_2, year_2)
                : printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", day_2, month_2, year_2 , day_1, month_1, year_1)
        : month_1 < month_2
            ? printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", day_1, month_1, year_1, day_2, month_2, year_2)
            : printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", day_2, month_2, year_2 , day_1, month_1, year_1)
    : year_1 < year_2
        ? printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", day_1, month_1, year_1, day_2, month_2, year_2)
        : printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", day_2, month_2, year_2 , day_1, month_1, year_1);

    return 0;
}