//35) Devise an algorithm that finds the first term of a sequence of positive integers that is less than the immediately preceding term of the sequence.
#include <stdio.h>
int main()
{
    int arr[] = {100, 60, 50, 30, 10, 1, -1};
    int i, n;
    n = sizeof(arr) / sizeof(int);
    for (i = 1; i < n; i++)
    {
        if (arr[i - 1] < arr[i])
        {
            printf("Positive integers that is less than the immediately preceding term of the sequence is : %d", arr[i - 1]);
            return 0;
        }
    }
    printf("No such term found in given set !");
    return 0;
}
