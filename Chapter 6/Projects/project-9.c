#include <stdio.h>

int main(void)
{
    float loan, interest, payment, monthly_interest, balance;
    int months;

    printf("Enter amount of loan: $");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter montlhy payment: $");
    scanf("%f", &payment);
    printf("Enter number of payments: ");
    scanf("%d", &months);
    monthly_interest = ((interest / 100) / 12) + 1;
    balance = loan * monthly_interest;

    for (int i = 0; i < months; i++) {
        printf("\nBalance remaining after %d payment: $%.2f\n", months, balance - payment);
        balance = (balance - payment) * monthly_interest;
    }

    return 0;
}