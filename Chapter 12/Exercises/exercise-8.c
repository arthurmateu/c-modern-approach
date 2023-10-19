void store_zeros(int a[], int n)
{
    int *i;

    for (i = a; i < a + n; i++)
        *i = 0;
}