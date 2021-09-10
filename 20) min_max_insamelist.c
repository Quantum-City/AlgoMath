/*20) Describe an algorithm for finding both the largest and the smallest integers in a finite sequence of integers.*/
#include <stdio.h>
int main()
{
    int a[] = {-4, 6, 8, 99, 100, -90, 34, -900};
    int min, max, n;
    n = sizeof(a) / sizeof(int);
    min = 100000;
    max = -100000;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("minimum and maximum numbers of given list are %d and %d", min, max);
    return 0;
}
