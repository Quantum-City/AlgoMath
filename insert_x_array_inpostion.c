#include <stdio.h>

int main()
{
    int A[] = {1, 3, 4, 5, 6, 8, 9, 11};
    int n = sizeof(A) / sizeof(int);
    int B[n + 1], i = 0, key = 7;
    while (key > A[i])
    {
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        B[j] = A[j];
    }
    for (int j = 0; j < n - i + 1; j++)
    {
        B[n - j + 1] = A[n - j];
    }
    B[i] = key;
    for (int k = 0; k < n + 1; k++)
    {
        printf("%d ", B[k]);
    }
    return 0;
}
