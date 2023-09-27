// Show total and average score per student
// Show average, highest and lowest quiz result

// Could've probably chosen better variable names (such as student/quiz instead of i/j)
// Opted not to since this was mostly just borrowed from the previous exercise
#include <stdio.h>

int main(void)
{
    int i, j, first, second, third, fourth, fifth, total, matrix[5][5], lowest, highest;
    float average;

    for (i = 0; i < 5; i++){
        printf("Enter row %d: ", i+1);
        scanf("%d %d %d %d %d", &first, &second, &third, &fourth, &fifth);
        matrix[i][0] = first; 
        matrix[i][1] = second; 
        matrix[i][2] = third; 
        matrix[i][3] = fourth; 
        matrix[i][4] = fifth; 
    }

    printf("\n\t\t|| STUDENT ||");

    printf("\nTotal score:");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++){
            total += matrix[i][j];
        }
        printf(" %d", total);
        total = 0;
    }

    printf("\nAverage score:");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++){
            average += matrix[j][i];
        }
        printf(" %.1f", average/5);
        average = 0.00f;
    }

    printf("\n\n\t\t\t|| QUIZ ||");

    printf("\nAverage score:");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++){
            average += matrix[j][i];
        }
        printf(" %.1f", average/5);
        average = 0.00f;
    }
    
    printf("\nHighest score:");
    for (i = 0; i < 5; i++) {
        highest = matrix[0][i];
        for (j = 0; j < 5; j++) {
            if (matrix[j][i] > highest)
                highest = matrix[j][i];
        }
        printf(" %d", highest);
    }

    printf("\nLowest score:");
    for (i = 0; i < 5; i++) {
        lowest = matrix[0][i];
        for (j = 0; j < 5; j++) {
            if (matrix[j][i] < lowest)
                lowest = matrix[j][i];
        }
        printf(" %d", lowest);
    }
    printf("\n");
}