/*25) Describe an algorithm that will count the number of 1s and 0s in a bit string by examining each bit of the string to determine whether it is a 1 bit or 0 bit.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int count_1 = 0, count_0 = 0, i;
    printf("\nEnter bit string of 1's and 0's : ");
    scanf("%[^\n]%*c", str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == '1')
        {
            count_1++;
        }
        else if (str[i] == '0')
        {
            count_0++;
        }
        else
        {
            printf("\nEnter correct input !!");
            return 0;
        }
    }
    printf("Number of 1's and 0's in given string is : %d, %d", count_1, count_0);
    return 0;
}
