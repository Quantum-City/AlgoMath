/*31) a> Two strings are anagrams if each can be formed from the other string by rearranging its characters. Devise an algorithm to determine whether two strings are anagrams by finding the frequency of each character that appears in the strings.*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "yui";
    char str2[] = "uiya";
    int i;
    int cst[25] = {0};
    if (strlen(str1) != strlen(str2))
    {
        printf("Two string are not Anagrams !!");
    }
    else
    {
        for (i = 0; i < strlen(str1); i++)
        {
            cst[str1[i] - 'a' + 1]++;
        }
        for (i = 0; i < strlen(str2); i++)
        {
            cst[str1[i] - 'a' + 1]--;
        }

        for (i = 0; i < 26; i++)
        {
            if (cst[i] != 0)
            {
                printf("Two string are not Anagram !!");
                return 0;
            }
            else if (i == strlen(str1))
            {
                printf("Two string are Anagram ");
                return 0;
            }
        }
    }
    return 0;
}
