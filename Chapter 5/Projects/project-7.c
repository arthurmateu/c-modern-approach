// Find largest and smallest of four integers entered by the user

#include <stdio.h>

int main(void)
{
    int num_1, num_2, num_3, num_4, comp1_largest, comp1_smallest, comp2_largest, comp2_smallest, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d%d%d%d", &num_1, &num_2, &num_3, &num_4);

    num_1 > num_2
    ? (comp1_largest = num_1, comp1_smallest = num_2)
    : (comp1_smallest = num_1, comp1_largest = num_2);
    num_3 > num_4 
    ? (comp2_largest = num_3, comp2_smallest = num_4) 
    : (comp2_smallest = num_3, comp2_largest = num_4);

    comp1_largest > comp2_largest ? (largest = comp1_largest) : (largest = comp2_largest);
    comp1_smallest < comp2_smallest ? (smallest = comp1_smallest) : (smallest = comp2_smallest);

    printf("Largest: %d\nSmallest: %d\n", largest, smallest);

    return 0;
}