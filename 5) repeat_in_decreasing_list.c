/*5) Describe an algorithm that takes as input a list of n integers in nondecreasing order and produces the list of all values that occur more than once.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3, 1, 3, 4, 5, 5, 6, 6, 6, 6};
    int i, count, size_arr;
    count = 0;
    size_arr = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < size_arr; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            printf("Plz enter number in decreasing order");
            return 0;
        }
    }
    printf("Repeating numbers are : ");
    for (i = 0; i < size_arr; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        else if (count > 0)
        {
            printf("%d", arr[i]);
            count = 0;
        }
    }
    return 0;
}
