/* Format product information entered by user */

#include <stdio.h>

int main(void)
{
    int item_number, mm, dd, yyyy;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);
    printf("Enter unit price: $");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    /*
        Item        Unit            Purchase
                    Price           Date
        {x}         $ {y}           aa/bb/cccc
    */
    printf("Item\t\tUnit\t\t\tPurchase\n");
    printf("\t\t\tPrice\t\t\tDate\n");
    printf("%d\t\t\t", item_number);
    printf("$%7.2f\t\t", unit_price);
    printf("%d/%.2d/%d\n", mm, dd, yyyy);

    return 0;
}