// Check which date comes earlier

#include <stdio.h>

int main(void)
{
    int day_1, day_2, month_1, month_2, year_1, year_2;
    int earliest_day, earliest_month, earliest_year, current_day, current_month, current_year;

    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &current_day, &current_month, &current_year);

    earliest_day = current_day, earliest_month = current_month, earliest_year = current_year;
    while (current_day && current_month && current_year){
        printf("Enter a date (dd/mm/yyyy): ");
        scanf("%d/%d/%d", &current_day, &current_month, &current_year);

        if ((current_day == 0) && (current_month == 0) && (current_year == 0)) break;

        if (earliest_year == current_year) {
            if (earliest_month == current_month) {
                if (current_day < earliest_day) {
                    earliest_day = current_day, earliest_month = current_month, earliest_year = current_year;
                }
            }
            if (current_month < earliest_month) {
                    earliest_day = current_day, earliest_month = current_month, earliest_year = current_year;
            }
        } 
        if (current_year < earliest_year){
                    earliest_day = current_day, earliest_month = current_month, earliest_year = current_year;

        }
    }

    printf("%d/%d/%.2d is the earliest date.\n", earliest_day, earliest_month, earliest_year);

    return 0;
}