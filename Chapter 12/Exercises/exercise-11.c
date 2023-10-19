int *find_largest(int a[], int n)
{
    int largest, *p;

    for (p = a; p < a + n; p++){
        if (*p > largest)
            largest = *p;
    }
    
    return &largest;
}