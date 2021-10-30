//33) Devise an algorithm that finds the first term of a sequence of integers that equals some previous term in the sequence.
#include <stdio.h>

int main()
{
    int arr[] = {1, 4, -1, 3, 8, -1, 3, 5, 3};
    int i, j, n;
    n = sizeof(arr) / sizeof(int);
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("First term of repeating sequence is : %d", arr[j]);
                return 0;
            }
        }
    }
    return 0;
}
