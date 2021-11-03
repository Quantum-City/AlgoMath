//G3) Devise an algorithms that implement bubble sort.
#include <stdio.h>
int main()
{
    int arr[] = {3, 3, 5, 1, -1, 89, 40, 30};
    int i, j, n, s;
    n = sizeof(arr) / sizeof(int);
    printf("List of numbers before sorting : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                s = arr[i];
                arr[i] = arr[j];
                arr[j] = s;
            }
        }
    }
    printf("\nList of numbers after sorting : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
