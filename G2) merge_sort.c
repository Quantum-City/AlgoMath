/*G2) Devise an algorithm to sort array element in aceding order using mergesort*/
#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int p, int q, int r)
{
    int n, m, i, j, k;
    n = q - p + 1;
    m = r - q;
    int arrl[n], arrr[m];

    for (i = 0; i < n; i++)
    {
        arrl[i] = arr[p + i];
    }
    for (j = 0; j < m; j++)
    {
        arrr[j] = arr[q + 1 + j];
    }
    i = 0;
    j = 0;
    k = p;
    while (n > i && m > j)
    {
        if (arrl[i] <= arrr[j])
        {
            arr[k] = arrl[i];
            i++;
        }
        else
        {
            arr[k] = arrr[j];
            j++;
        }
        k++;
    }
    while (i < n)
    {
        arr[k] = arrl[i];
        i++;
        k++;
    }
    while (j < m)
    {
        arr[k] = arrr[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        mergesort(arr, p, q);
        mergesort(arr, q + 1, r);
        merge(arr, p, q, r);
    }
}

int main()
{
    int arr[] = {3, 4, 5, 7, 1, 0, -1}, n;
    n = sizeof(arr) / sizeof(int);
    printf("\nArray before sorting : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    mergesort(arr, 0, n - 1);
    printf("\nArray after sorting : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
