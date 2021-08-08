#include <stdio.h>
int main()
{
    int i, n, a[100], sum, k;
    sum = 0;
    printf("Enter the times of numbers : ");
    scanf("%d", &n);
    printf("\nEnter number : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < n; j++)
    {
        sum = sum + a[j];
    }
    printf("Your answer is : %d", sum);
    return 0;
}
