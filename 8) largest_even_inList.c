/*8) Describe an algorithm that takes as input a list of n distinct integers and finds the location of the largest even integer in the list or returns 0 if there are no even integers in the list*/
#include <stdio.h>
int main()
{
    int i, large_num, a[100], n, loc;
    large_num = -10000;
    printf("\nEnter times of numbers : ");
    scanf("%d", &n);
    printf("Enter list of numbers : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && a[i] > large_num)
        {
            loc = i;
            large_num = a[i];
        }
    }
    if (large_num == -10000)
    {
        printf("\nThere are no even numbers in the given list !");
    }
    else
    {
        printf("Largest even number in the given list is %d at index %d", large_num, loc);
    }
    return 0;
}
