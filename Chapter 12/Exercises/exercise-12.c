void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int *p;

    *largest = *second_largest = a[0];

    for (p = a; p < a + n; p++) {
        if (*p > *largest){
            *second_largest = *largest;
            *largest = *p;
        } else if (*p > *second_largest && *p < *largest){
            *second_largest = *p;
        }
    }
}