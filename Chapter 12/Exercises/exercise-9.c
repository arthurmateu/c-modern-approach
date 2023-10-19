double inner_product(const double *a, const double *b, int n)
{
    int i;
    double sum;

    while (i++ < n)
        sum += *a++ * *b++;

    return sum;
}