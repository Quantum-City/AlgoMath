#include <stdio.h>

int main()
{
    int A[] = {1, 3, 4, 5, 6, 8, 9, 11};
    int mean = 0;
    int median, max = -1000, min = 1000;
    int n = sizeof(A) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        mean = mean + A[i];
    }
    mean = mean / n + 1;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (min > A[i])
        {
            min = A[i];
        }
    }
    printf("\nThe max, min and mean of this set is : %d, %d, %d\n", max, min, mean);
    if (n % 2 == 0)
    {
        printf("The Mediun of this set is : %d, %d", A[n / 2 - 1], A[n / 2]);
    }
    else
    {
        printf("The Median of this set is : %d", A[n / 2]);
    }
}
