/*6) Describe an algorithm that takes as input a list of n integers and finds the number of negative integers in the list*/
#include <stdio.h>
int main()
{
    int a[100], i, count, n;
    count = 0;
    printf("\nEnter times of Number : ");
    scanf("%d", &n);
    printf("\nEnter List of Numbers : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nNegative Numbers are : ");
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            printf("[%d] ", a[i]);
            count++;
        }
    }
    printf("\nTotal Number of Negative Number is %d", count);
    return 0;
}
