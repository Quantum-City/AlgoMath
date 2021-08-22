/*11) a> Describe an algorithm that interchanges the values of the variables x and y, using only assignments.*/
#include <stdio.h>
int main()
{
    int x, y;
    printf("\nEnter the value of x and y : ");
    scanf("%d %d", &x, &y);
    printf("\nThe value of x and y before swapping is %d and %d", x, y);
    x = x * y;
    y = x / y;
    x = x / y;
    printf("\nThe value of x and y after swapping is %d and %d", x, y);
    return 0;
}
