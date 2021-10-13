/*29) Devise an algorithm that finds a mode in a list of nondecreasing integers.*/
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 4, 5, 6};
    int max_count = 1, i, j, n, k;
    int count = 1;
    n = sizeof(arr) / sizeof(int);
    j = arr[0];
    for (i = 1; i < n; i++)
    {
        if (j == arr[i])
        {
            count++;
            j = arr[i];
        }
        else
        {
            count = 1;
            j = arr[i];
        }
        if (max_count < count)
        {
            k = j;
            max_count = count;
        }
    }
    if (max_count == 1)
    {
        printf("No MODE found !!");
    }
    else
    {
        printf("Mode is %d", k);
    }
    return 0;
}
