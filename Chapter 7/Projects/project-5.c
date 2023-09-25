/* 
    Scrabble! (assigns value to the letter used)
    Value table:
    1: AEILNORSTU, 
    2: DG, 
    3: BCMP, 
    4: FHVWY, 
    5: K, 
    8: JX, 
    10: QZ
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int sum = 0;
    char ch;
    printf("Enter a word: ");

    while ((ch = getchar()) != '\n'){
        switch (toupper(ch)) {
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U': sum++; break;
            case 'D': case 'G': sum+=2; break;
            case 'B': case 'C': case 'M': case 'P': sum+=3; break;
            case 'F': case 'H': case 'V': case 'W': case 'Y': sum+=4; break;
            case 'K': sum+=5; break;
            case 'J': case 'X': sum+=8; break;
            case 'Q': case 'Z': sum+=10; break;
            default: break;
        }
    }
    printf("Scrabble value: %d\n", sum);

    return 0;
}