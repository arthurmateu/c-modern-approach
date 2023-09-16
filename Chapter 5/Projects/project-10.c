// Numerical grade to letter grade

#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    grade /= 10; // Hint suggests to look at the first character of the grade, but it seems like too much work to account for the 100 numerical grade case

    printf("Letter grade: ");
    switch (grade) {
        case 10: case 9:    printf("A\n"); break;
        case 8:             printf("B\n"); break;
        case 7:             printf("C\n"); break;
        case 6:             printf("D\n"); break;
        default:            printf("F\n"); break;
    }

    return 0;
}