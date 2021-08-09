/* 4) Describe an algorithm that takes as input a list of n integers and produces as output the largest difference obtained by subtracting an integer in the list from the one following it.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int max_diff, a[100], n, i, num1, num2;
    max_diff = -1000;
    printf("Enter times of numbers : ");
    scanf("%d", &n);
    printf("Enter list of numbers : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(a[i] - a[j]) > max_diff)
            {
                max_diff = abs(a[i] - a[j]);
                num1 = a[i];
                num2 = a[j];
            }
        }
    }
    printf("Largest difference is %d between %d and %d", max_diff, num1, num2);
    return 0;
}
