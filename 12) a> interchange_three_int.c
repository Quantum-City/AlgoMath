/*Describe an algorithm that uses only assignment statements that replaces the triple (x, y, z) with (y, z, x).*/
#include <stdio.h>
int main()
{
    int x, y, z;
    printf("\nEnter three numbers : ");
    scanf("%d %d %d", &x, &y, &z);
    printf("\nValues of integer x, y and z before swapping is : %d %d %d", x, y, z);
    x = x * y * z;
    y = x / y / z;
    z = x / y / z;
    x = x / y / z;
    x = x * y * z;
    y = x / y / z;
    z = x / y / z;
    x = x / y / z;
    printf("\nValues of integer x, y and z after swapping is : %d %d %d", x, y, z);
    return 0;
}
