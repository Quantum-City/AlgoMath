/*27) The ternary search algorithm locates an element in a list of increasing integers by successively splitting the list into three sublists of equal (or as close to equal as possible) size, and restricting the search to the appropriate piece. Specify the steps of this algorithm.*/

#include <stdio.h>

int ternarySearch(int l, int r, int key, int arr[])
{
    while (r >= l)
    {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        if (arr[mid1] == key)
        {
            return mid1;
        }
        if (arr[mid2] == key)
        {
            return mid2;
        }

        if (key < arr[mid1])
        {
            r = mid1 - 1;
        }
        else if (key > arr[mid2])
        {
            l = mid2 + 1;
        }
        else
        {
            l = mid1 + 1;
            r = mid2 - 1;
        }
    }
    return -1;
}

int main()
{
    int l, r, p, key;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
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
  return 0;
}
