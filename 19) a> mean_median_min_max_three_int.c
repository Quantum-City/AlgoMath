/*19) Describe an algorithm that produces the maximum, median, mean, and minimum of a set of three integers.*/
#include <stdio.h>
int main()
{
    int x, y, z, median, max, min;
    float mean = 0.0;
    printf("\nEnrer three numbers : ");
    scanf("%d %d %d", &x, &y, &z);
    mean = (x + y + z) / 3;
    if (x > y)
    {
        if (x > z)
        {
            max = x;
        }
        if (y > z)
        {
            min = z;
        }
        else
        {
            min = y;
        }
    }
    else
    {
        if (y > z)
        {
            max = y;
        }
        if (x > z)
        {
            min = z;
        }
        else
        {
            min = x;
        }
    }
    median = (x * y * z) / min / max;
    printf("\nMean, median, minimum and maximum of given numbers is given by : ");
    printf("\nmean : %f", mean);
    printf("\nmedian : %d", median);
    printf("\nmin and max : %d, %d", min, max);
    return 0;
}
