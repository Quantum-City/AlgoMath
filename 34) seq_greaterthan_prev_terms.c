//34) Devise an algorithm that finds all terms of a finite sequence of integers that are greater than the sum of all previous terms of the sequence.
#include <stdio.h>
int main()
{
    int arr[] = {2, 1, 3, 5, -1, 15, -9, -15, 13};
    int l[50];
    int i, j, n, sum;
    j = 0;
    sum = 0;
    n = sizeof(arr) / sizeof(int);
    for (i = 0; i < n; i++)
    {
        if (arr[i] > sum)
        {
            l[j++] = arr[i];
        }
        sum = sum + arr[i];
    }
    printf("Sequence of integers are :");
    for (i = 0; i < j; i++)
    {
        printf(" %d", l[i]);
    }
    return 0;
}
