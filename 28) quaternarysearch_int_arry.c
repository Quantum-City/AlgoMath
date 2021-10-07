/*28) Specify the steps of an algorithm that locates an element in a list of increasing integers by successively splitting the list into four sublists of equal (or as close to equal as possible) size, and restricting the search to the appropriate piece*/

#include <stdio.h>

int ternarySearch(int l, int r, int key, int arr[])
{
    while (r >= l)
    {
        int mid1 = l + (r - l) / 4;
        int mid2 = (r + l) / 2;
        int mid3 = r - (r - l) / 4;

        if (arr[mid1] == key)
        {
            return mid1;
        }
        if (arr[mid2] == key)
        {
            return mid2;
        }
        if (arr[mid3] == key)
        {
            return mid3;
        }
        if (key < arr[mid1])
        {
            r = mid1 - 1;
        }
        else if (key > arr[mid2] && key < arr[mid3])
        {
            l = mid2 + 1;
        }
        else if (key > arr[mid3])
        {
            l = mid3 + 1;
        }
        else
        {
            l = mid1 + 1;
            r = mid3 - 1;
        }
    }
    return -1;
}

int main()
{
    int l, r, p, key;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    l = 0;
    r = sizeof(arr) / sizeof(int) - 1;
    printf("Enter the key: ");
    scanf("%d", &key);
    p = ternarySearch(l, r, key, arr);
    if (p == -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Given key %d is at location %d in given array", key, p + 1);
    }
}
