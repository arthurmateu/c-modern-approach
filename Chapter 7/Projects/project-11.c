// Display Last, F.

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch, first;
    printf("Enter a first and last name: ");
    scanf("%c", &first);

    while (getchar() != ' ');
    while ((ch = getchar()) != '\n') {
        putchar(ch);
    }

    printf(", %c.\n", first);

    return 0;
}