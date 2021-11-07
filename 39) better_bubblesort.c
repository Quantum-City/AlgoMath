//39) Adapt the bubble sort algorithm so that it stops when no interchanges are required. Express this more efficient version of the algorithm in pseudocode.
#include <stdio.h>
int main()
{
    int arr[] = {2, 4, 5, 2, -6, 9, -11};
    int i, j, n, flage, swap;
    flage = 0;
    n = sizeof(arr) / sizeof(int);
    printf("Array before sorting :");
    for (i = 0; i < n; i++)
    {
        printf(" (%d)", arr[i]);
    }
    i = 0;
    while (i < n && flage == 0)
    {
        flage = 1;
        for (j = 0; j < (n - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
                flage = 0;
            }
        }
        i++;
    }
    printf("\nArray after sorting :");
    for (i = 0; i < n; i++)
    {
        printf(" (%d)", arr[i]);
    }
    return 0;
}
