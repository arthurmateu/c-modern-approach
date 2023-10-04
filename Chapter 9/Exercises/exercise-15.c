double median(double x, double y, double z)
{
    int median = x;

    if (((y <= x) && (y >= z)) || ((y >= x) && (y <= z))) median = y;
    if (((z <= y) && (z >= x)) || ((z >= y) && (z <= x))) median = z;

    return median;
}