void split_date(int day_of_year, int year, int *month, int *day)
{
    int i = 0, 
        days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    day_of_year -= (year = day_of_year / 365) * 365;
    for (i = 0; i < 1; i++){
        if (days_in_month[i] > day_of_year)
            break;
        day_of_year -= days_in_month[i];
        *month++;   
    }

    *day = day_of_year;
}