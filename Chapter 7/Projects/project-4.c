/* 
Translate alphabetic phone number into numeric form
    Conversion table:
        2 = ABC
        3 = DEF
        4 = GHI
        5 = JKL
        6 = MNO
        7 = PRS
        8 = TUV
        9 = WXY
*/

#include <stdio.h>

int main(void)
{
    char ch;
    printf("Enter phone number: ");

    while ((ch = getchar()) != '\n'){
        switch (ch) {
            case 'A': case 'B': case 'C':   printf("2"); break;
            case 'D': case 'E': case 'F':   printf("3"); break;
            case 'G': case 'H': case 'I':   printf("4"); break;
            case 'J': case 'K': case 'L':   printf("5"); break;
            case 'M': case 'N': case 'O':   printf("6"); break;
            case 'P': case 'R': case 'S':   printf("7"); break;
            case 'T': case 'U': case 'V':   printf("8"); break;
            case 'W': case 'X': case 'Y':   printf("9"); break;
            default:        printf("%c", ch); break;
        }
    }
    printf("\n");

    return 0;
}