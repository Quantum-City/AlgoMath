/*30) Devise an algorithm that finds all modes.*/
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 3, 4, 4, 5, 6};
    int max_count = 1, i, j, n, k, l[50];
    int h = 0;
    int count = 1;
    n = sizeof(arr) / sizeof(int);
    j = arr[0];
    printf("\nAll modes of given list : ");
    for (i = 1; i < n; i++)
    {
        if (j == arr[i])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (max_count <= count)
        {
            k = j;
            max_count = count;
            if (max_count > 1)
            {
                l[h++] = k;
            }
        }
        j = arr[i];
    }
    l[h] = 0;
    if (max_count == 1)
    {
        printf("No MODE found !!");
    }
    else
    {
        for (i = 0; l[i] != 0; i++)
        {
            printf("%d ", l[i]);
        }
    }
    return 0;
}
