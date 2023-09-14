/* Display numbers in a 4 by 4 arrangement */

#include <stdio.h>

int main(void)
{
    int row1col1, row1col2, row1col3, row1col4, row2col1, row2col2, row2col3, row2col4, row3col1, row3col2, row3col3, row3col4, row4col1, row4col2, row4col3, row4col4;

    printf("Enter the numbers from 1 to 16 in any order: "); // There is actually no verification if the numbers are between 1 to 16
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &row1col1, &row1col2, &row1col3, &row1col4, &row2col1, &row2col2, &row2col3, &row2col4, &row3col1, &row3col2, &row3col3, &row3col4, &row4col1, &row4col2, &row4col3, &row4col4);

    // Print 4x4 matrix
    printf("%d\t%d\t%d\t%d\n", row1col1, row1col2, row1col3, row1col4);
    printf("%d\t%d\t%d\t%d\n", row2col1, row2col2, row2col3, row2col4);
    printf("%d\t%d\t%d\t%d\n", row3col1, row3col2, row3col3, row3col4);
    printf("%d\t%d\t%d\t%d\n", row4col1, row4col2, row4col3, row4col4);

    printf("Row sums: %d %d %d %d\n", row1col1+row1col2+row1col3+row1col4, row2col1+row2col2+row2col3+row2col4, row3col1+row3col2+row3col3+row3col4, row4col1+row4col2+row4col3+row4col4);
    printf("Column sums: %d %d %d %d\n", row1col1+row2col1+row3col1+row4col1, row1col2+row2col2+row3col2+row4col2, row1col3+row2col3+row3col3+row4col3, row1col4+row2col4+row3col4+row4col4);
    printf("Diagonal sums: %d %d\n", row1col1+row2col2+row3col3+row4col4, row4col1+row3col2+row2col3+row1col4);

    return 0;
}