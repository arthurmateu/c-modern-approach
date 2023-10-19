// Based of page's 261 example
int sum_array(const int a[], int n)
{
    int *i, sum;

    sum = 0;
    for (*i = &a[0]; i < &a[n]; i++)
        sum += *i;
    return sum;
}