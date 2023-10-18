// Slightly edited from maxmin.c (found in page 250)

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i;

    *largest = *second_largest = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > *largest){
            *second_largest = *largest;
            *largest = a[i];
        } else if (a[i] > *second_largest && a[i] < *largest){
            *second_largest = a[i];
        }
    }
}