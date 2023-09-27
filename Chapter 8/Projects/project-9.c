// Random walk in 10x10 matrix

// Please note that this one is still unfinished, since it still has some bugs
// Notely, it decides to "teleport" to the opposite side of the table

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int move, i = 0, j = 0, previous_i, previous_j;
    char ch = 'A', matrix[10][10] = {0};

    srand((unsigned) time(NULL));

    while (ch != 'Z'){
        previous_i = i;
        previous_j = j;
        matrix[i][j] = ch;

        move = rand() % 4;
        switch (move) {
            case 0: 
                if (i+1 < 10 && matrix[i+1][j] == 0) i++;
                break;
            case 1:
                if (j+1 < 10 && matrix[i][j+1] == 0) j++;
                break;
            case 2: 
                if (i-1 >= 0 && matrix[i-1][j] == 0) i--;
                break;
            case 3: j--; 
                if (j-1 >= 0 && matrix[i][j-1] == 0) j--;
                break;
        }
        
        if (previous_i == i && previous_j == j) {
            i = previous_i;
            j = previous_j;
            continue;
        } else ch++;
    }

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if (matrix[i][j] == 0) matrix[i][j] = '.';
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}