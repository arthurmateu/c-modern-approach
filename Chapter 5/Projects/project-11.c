// Print english word for number

#include <stdio.h>

int main(void)
{
    int tens, ones;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &tens, &ones);

    printf("You entered the number ");
    
    switch (tens) {
        case 1: switch (ones) {
            // The return 0; is to just kill the function, to avoid a situation like "You entered the number eleven-one"
            case 0: printf("ten\n"); return 0;
            case 1: printf("eleven\n"); return 0;
            case 2: printf("twelve\n"); return 0;
            case 3: printf("thirteen\n"); return 0;
            case 4: printf("fourteen\n"); return 0;
            case 5: printf("fifteen\n"); return 0;
            case 6: printf("sixteen\n"); return 0;
            case 7: printf("seventeen\n"); return 0;
            case 8: printf("eighteen\n"); return 0;
            case 9: printf("nineteen\n"); return 0;
        }
        case 2: printf("twenty"); break;
        case 3: printf("thirty"); break;
        case 4: printf("forty"); break;
        case 5: printf("fifty"); break;
        case 6: printf("sixty"); break;
        case 7: printf("seventy"); break;
        case 8: printf("eighty"); break;
        case 9: printf("ninety"); break;
        default: break;
    }

    switch (ones) {
            case 1: printf("-one"); break;
            case 2: printf("-two"); break;
            case 3: printf("-three"); break;
            case 4: printf("-four"); break;
            case 5: printf("-five"); break;
            case 6: printf("-six"); break;
            case 7: printf("-seven"); break;
            case 8: printf("-eight"); break;
            case 9: printf("-nine"); break;
            default: break;
        }

    printf("\n");

    return 0;
}