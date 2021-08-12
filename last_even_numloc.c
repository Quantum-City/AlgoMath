/*7) Describe an algorithm that takes as input a list of n integers and finds the location of the last even integer in the list or returns 0 if there are no even integers in the list.*/
#include <stdio.h>
int main()
{
    int i, loc, a[100], n;
    loc = 0;
    printf("\nEnter quantity of number : ");
    scanf("%d", &n);
    printf("\nEnter list of Number : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            loc = i;
        }
    }
    printf("The Last even integer in the list of given number is %d", loc + 1);
    return 0;
}
