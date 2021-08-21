/*10) Devise an algorithm to compute x^n, where x is a real number and n is an integer.*/
#include <stdio.h>
int main()
{
    int n;
    float exp, x;
    exp = 1.00;
    printf("Enter exponant : ");
    scanf("%f", &x);
    printf("Enter power of exponant : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        exp = exp / x;
    }
    exp = 1 / exp;
    printf("The value of x^n is : %f", exp);
    return 0;
}
