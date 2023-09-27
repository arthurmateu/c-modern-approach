// Show sum of rows and sum of columns from 5x5 matrix
// There's probably a way more efficient way to do the scanning and calculation
#include <stdio.h>

int main(void)
{
    int i, j, first, second, third, fourth, fifth, total, matrix[5][5];

    for (i = 0; i < 5; i++){
        printf("Enter row %d: ", i+1);
        scanf("%d %d %d %d %d", &first, &second, &third, &fourth, &fifth);
        matrix[i][0] = first; 
        matrix[i][1] = second; 
        matrix[i][2] = third; 
        matrix[i][3] = fourth; 
        matrix[i][4] = fifth; 
    }

    printf("\nRow totals:");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++){
            total += matrix[i][j];
        }
        printf(" %d", total);
        total = 0;
    }

    printf("\nColumn totals:");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++){
            total += matrix[j][i];
        }
        printf(" %d", total);
        total = 0;
    }
    printf("\n");
}