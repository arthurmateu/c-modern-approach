void largest_average_positives (int n, int a[])
{
    int largest = a[0];
    for (int i = 0; i < n; i++) if (a[i] > largest) largest = a[i];
    printf("Largest number: %d\n", largest);

    int sum = 0;
    for (int i = 0; i < n; i++) sum += a[i];
    printf("Average of all elements: %d\n", sum/n);

    int positives = 0;
    for (int i = 0; i < n; i++) if (a[i] > 0) positives++;
    printf("Positive numbers: %d\n", positives);
}