// Calculate average word length for a sentence

#include <stdio.h>

int main(void)
{
    char ch;
    float length = 0.00f, words = 1.00f;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n')
        (ch == ' ') ? words++ : length++;

    printf("Average word length: %.1f\n", length/words);

    return 0;
}