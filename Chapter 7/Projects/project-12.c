// Evaluate an expression
#include <stdio.h>

int main(void)
{
    float num = 0.00f, result = 0.00f;
    char operator;

    printf("Enter an expression: ");
    scanf("%f", &result);

    while ((operator = getchar()) != '\n'){
        switch (operator) {
            case '+': scanf("%f", &num); result+=num; break;
            case '-': scanf("%f", &num); result-=num; break;
            case '*': scanf("%f", &num); result*=num; break;
            case '/': scanf("%f", &num); result/=num; break;
            default: break;
        }
    }

    printf("Value of expression: %f.\n", result);

    return 0;
}