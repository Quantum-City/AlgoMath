/*Describe an algorithm that generates gcd as linear combination on accepting inputs two numbers.*/
#include <stdio.h>
int main()
{
    int a, b, x, y, old_olds, olds, old_oldt, oldt, q, r, s, t;
    printf("Enter two number : ");
    scanf("%d %d", &a, &b);
    x = a;
    y = b;
    old_olds = 1;
    olds = 0;
    old_oldt = 0;
    oldt = 1;
    while (y != 0)
    {
        q = x / y;
        r = x % y;
        x = y;
        y = r;
        s = old_olds - q * olds;
        t = old_oldt - q * oldt;
        old_olds = olds;
        old_oldt = oldt;
        olds = s;
        oldt = t;
    }
    printf("gcd(%d, %d) is %d, and (%d).%d + (%d).%d = %d", a, b, x, old_olds, a, old_oldt, b, x);
    return 0;
}
