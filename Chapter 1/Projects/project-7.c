#include <stdio.h>

int main(void)
{
    int amount, twenty_bills, ten_bills, five_bills, one_bills;
    printf("Enter a dollar amount: $");
    scanf("%d", &amount);

    // Note how many x bills are necessary and reduce from the amount
    twenty_bills = amount/20; amount = amount - (twenty_bills * 20);
    ten_bills = amount/10; amount = amount - (ten_bills * 10);
    five_bills = amount/5; amount = amount - (five_bills * 5);
    one_bills = amount;

    printf("\n$20 bills: $%d\n", twenty_bills);
    printf("$10 bills: $%d\n", ten_bills);
    printf("$5 bills: $%d\n", five_bills);
    printf("$1 bills: $%d\n", one_bills);

    return 0;
}