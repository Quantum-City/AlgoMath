/*The trial division algorithm for determining whether an integer is prime.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int isprime, d, n;
    d = 2;
    printf("\nEnter a number : ");
    scanf("%d", &n);
    isprime = 1;
    while (isprime && d <= sqrt(n))
    {
        if (n % d == 0)
        {
            isprime = 0;
            printf("\n%d is not prime number!", n);
            return 0;
        }
        else
        {
            d++;
        }
    }
    printf("\n%d is prime number !", n);
    return 0;
}
