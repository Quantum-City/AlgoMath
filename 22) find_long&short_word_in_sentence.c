/*22) Describe an algorithm to find the longest and shortest word in an English sentence (where a sentence is a sequence of symbols, either a letter or a blank, which can then be broken into alternating words and blanks).*/
#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0, j = 0, k, length;
    char str[100], word[100][100], small[100], longest[100];
    printf("\nEnter a sentence : ");
    scanf("%[^\n]%*c", str);
    for (k = 0; str[k] != '\0'; k++)
    {
        if (str[k] != ' ' && str[k] != '\0')
        {
            word[i][j++] = str[k];
        }
        else
        {
            word[i][j] = '\0';
            i++;
            j = 0;
        }
    }
    length = i + 1;
    strcpy(small, word[0]);
    strcpy(longest, word[0]);
    for (k = 0; k < length; k++)
    {
        if (strlen(small) > strlen(word[k]))
        {
            strcpy(small, word[k]);
        }
        if (strlen(longest) < strlen(word[k]))
        {
            strcpy(longest, word[k]);
        }
    }
    printf("\nLongest word in given sentence is : %s", longest);
    printf("\nShortest word in given sentence is : %s", small);
    printf("\nThe original statement is : %s", str);

    return 0;
}
