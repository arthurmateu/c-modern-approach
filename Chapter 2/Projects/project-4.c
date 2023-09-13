#include <stdio.h>

#define TAX 0.05f

int main(void)
{
    float price;
    printf("Enter an amount: ");
    scanf("%f", &price);

    printf("With tax added: $%.2f\n", price * (1 + TAX));

    return 0;
}