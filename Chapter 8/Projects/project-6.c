// Text to B1FF translator
#include <stdio.h>
#include <ctype.h>

#define TOTAL 255

int main(void)
{
    char ch, message[TOTAL] = {0};
    int i = 0;

    printf("Enter message: ");
    while ((ch = getchar()) != '\n' && i < TOTAL)
        message[i++] = ch;

    printf("In B1FF-speak: ");
    for (i = 0; i < TOTAL; i++){
        switch (ch = toupper(message[i])) {
            case 'A': putchar('4'); break;
            case 'B': putchar('8'); break;
            case 'E': putchar('3'); break;
            case 'I': putchar('1'); break;
            case 'O': putchar('0'); break;
            case 'S': putchar('5'); break;
            default:  putchar(ch) ; break;
        }
    }
    for (i = 0; i < 10; i++) printf("!");
    printf("\n");

    return 0;
}