/*Describe an algorithm which calculate gcd of two numbers.*/
#include <stdio.h>
int main()
{
    int x, y, r;
    printf("\nEnter Two Number : ");
    scanf("%d %d", &x, &y);
    printf("gcd of %d and %d is : ", x, y);
    while (y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    printf("%d", x);
    return 0;
}
