// Calculate sum of days in year

int day_of_year(int month, int day, int year)
{
    int sum = 0, 
        days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    sum += day;
    for (int i = 1; i < month; i++) sum += days_in_month[i-1];
    if (year % 4 == 0 && month > 2) sum++; 

    return sum;
}