/* Take mm/dd/yyyy date and convert it to yyyymmdd */

#include <stdio.h>

int main(void)
{
    int mm, dd, yyyy;

    printf("Enter the date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("Your entered date: %d%.2d%.2d\n", yyyy, mm, dd);

    return 0;
}