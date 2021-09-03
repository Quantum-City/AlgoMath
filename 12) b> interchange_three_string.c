/*12) b> Describe an algorithm that uses only assignment statements that replaces the string triple (x, y, z) with (y, z, x).*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *x, *y, *z, *swap;
    x = malloc(256);
    y = malloc(256);
    z = malloc(256);
    swap = malloc(256);
    printf("\nEnter three strings : ");
    scanf("%255s %255s %255s", x, y, z);
    printf("\nString x, y and z before swapping is : %s %s %s", x, y, z);
    swap = x;
    x = y;
    y = z;
    z = swap;
    printf("\nString x, y and z after swapping is : %s %s %s", x, y, z);
    free(x);
    free(y);
    free(z);
    free(swap);
    return 0;
}
