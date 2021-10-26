/*31) a> Two strings are anagrams if each can be formed from the other string by rearranging its characters. Devise an algorithm to determine whether two strings are anagrams by first sorting the characters in both strings.*/
#include <stdio.h>
#include <string.h>

void swap(char str[], int s, int r)
{
    char z = str[s];
    str[s] = str[r];
    str[r] = z;
}
int partition(char str[], int l, int r)
{
    char key = str[r];
    int i = l - 1;
    for (int j = l; j < r + 1; j++)
    {
        if (str[j] < key)
        {
            i++;
            swap(str, i, j);
        }
    }
    swap(str, i + 1, r);
    return i + 1;
}
int quicksort(char str[], int p, int r)
{
    if (p < r)
    {
        int q = partition(str, p, r);
        quicksort(str, p, q - 1);
        quicksort(str, q + 1, r);
    }
    return 0;
}
int main()
{
    char str1[] = "ashliurt";
    char str2[] = "trushali";
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2)
    {
        printf("Two string are not Anagram !");
        return 0;
    }
    quicksort(str1, 0, len1 - 1);
    quicksort(str2, 0, len2 - 1);
    for (int k = 0; k < len1; k++)
    {
        if (str1[k] != str2[k])
        {
            printf("Two string are not Anagram !");
            return 0;
        }
    }
    printf("Two string are an Anagram !!");
    return 0;
}
