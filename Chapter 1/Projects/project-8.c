#include <stdio.h>

int main(void)
{
    float loan, interest, payment, monthly_interest, balance;
    printf("Enter amount of loan: $");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter montlhy payment: $");
    scanf("%f", &payment);
    monthly_interest = ((interest / 100) / 12) + 1;
    balance = loan * monthly_interest;

    printf("\nBalance remaining after first payment: $%.2f\n", balance - payment); balance = (balance - payment) * monthly_interest;
    printf("Balance remaining after second payment: $%.2f\n", balance - payment); balance = (balance - payment) * monthly_interest;
    printf("Balance remaining after third payment: $%.2f\n", balance - payment); balance = (balance - payment) * monthly_interest;

    return 0;
}