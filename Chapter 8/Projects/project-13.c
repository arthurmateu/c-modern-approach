// Display Last, F. - but with arrays

#include <stdio.h>
#include <ctype.h>

#define LENGTH 20

int main(void)
{
    char last[LENGTH], first, ch;
    printf("Enter a first and last name: ");
    scanf("%c", &first);

    while (getchar() != ' ');
    for (int i = 0; (ch = getchar()) != '\n'; i++) last[i] = ch;

    for (int i = 0; i < LENGTH; i++) printf("%c", last[i]);
    printf(", %c.\n", first);

    return 0;
}