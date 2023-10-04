/*
    The function will end prematurely after finding a non-zero value, giving false negatives. This happens because of the else statement
    A correct implementation would be as follows:
*/

bool has_zero(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        if (a[i] == 0)
            return true;

    return false;
}