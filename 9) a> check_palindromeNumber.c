/*9) a> A palindrome number is a number that reads the same forward and backward. Describe an algorithm for determining whether a number is a palindrome number.*/
#include <stdio.h>
int main()
{
    int num, rem, rev, q;
    rev = 0;
    printf("Enter the number to check palindrome : ");
    scanf("%d", &num);
    q = num;
    while (q)
    {
        rem = q % 10;
        rev = rem + 10 * rev;
        q = q / 10;
    }
    if (num == rev)
    {
        printf("The %d number is palindrome number", num);
    }
    else
    {
        printf("The given number %d is not palindrom number", num);
    }
    return 0;
}
