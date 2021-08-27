/*Describe an algorithm which finds the prime factorization of an integer.*/
#include <stdio.h>
int main()
{
    int n, d;
    d = 2;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("\nPrime factorization of a %d is : ", n);
    while (n > 1)
    {
        if (n % d == 0)
        {
            printf("%d x ", d);
            n = n / d;
        }
        else
        {
            d++;
        }
    }
    printf("1");
  return 0;
}
