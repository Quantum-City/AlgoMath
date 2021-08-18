/* 9) b> A palindrome is a string that reads the same forward and backward. Describe an algorithm for determining whether a string of n characters is a palindrome.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int length, flag;
    flag = 0;
    printf("\nEnter a string to check palindrome : ");
    scanf("%s", &str);
    length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("\nThe given string '%s' is not palindrome", str);
    }
    else
    {
        printf("\nThe given string '%s' is palindrome", str);
    }
    return 0;
}
