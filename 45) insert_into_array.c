//45) Describe an algorithm based on the linear search for determining the correct position in which to insert a new element in an already sorted list.
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 56, 78, 99, 101, 201, 357};
    int i, n, key, arr2[50];
    printf("Enter number to add into the array : ");
    scanf("%d", &key);
    n = sizeof(arr) / sizeof(int);
    printf("Array before inserting new element :");
    for (i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (key < arr[i])
        {
            arr2[i] = key;
            n++;
            break;
        }
        arr2[i] = arr[i];
    }
    for (i; i < n; i++)
    {
        arr2[i + 1] = arr[i];
    }
    printf("\nArray after inserting new element :");
    for (i = 0; i < n; i++)
    {
        printf(" %d", arr2[i]);
    }
    return 0;
}
