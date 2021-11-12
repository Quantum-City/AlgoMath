//46) Describe an algorithm based on the binary search for determining the correct position in which to insert a new element in an already sorted list.
#include <stdio.h>
int binarysearchposition(int arr[], int key, int n)
{
    int l, r, m, position;
    l = 0;
    r = n;
    while (r >= l)
    {
        m = l + (r - l) / 2;
        if (arr[l] > key)
        {
            position = l;
            break;
        }
        else if (arr[n] < key)
        {
            position = n + 1;
            break;
        }
        else if (arr[m] >= key && arr[m - 1] <= key)
        {
            position = m;
            break;
        }
        else if (arr[m] >= key)
        {
            r = m;
        }
        else if (arr[m] <= key)
        {
            l = m;
        }
    }
    return position;
}

int main()
{
    int arr[] = {1, 2, 3, 56, 78, 99, 101, 201, 357};
    int n, key, arr2[50], p, i, j;
    printf("Enter number to add into the array : ");
    scanf("%d", &key);
    n = sizeof(arr) / sizeof(int);
    printf("Array before inserting new element :");
    for (i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    p = binarysearchposition(arr, key, n - 1);
    arr2[p] = key;
    n++;
    for (i = 0, j = 0; i < n && j < n; i++, j++)
    {
        if (key == arr2[i])
        {
            j++;
        }
        arr2[j] = arr[i];
    }
    printf("\nArray after inserting new element :");
    for (i = 0; i < n; i++)
    {
        printf(" %d", arr2[i]);
    }
    return 0;
}
