/*11) b> Describe an algorithm that interchanges the values of the variables(char) x and y, using only assignments.*/
#include <stdio.h>

int main()
{
    char x, y, z;
    printf("\nEnter the value(char) of x and y : ");
    scanf("%c %c", &x, &y);
    printf("\nThe value of x and y before swapping is %c and %c", x, y);
    z = x;
    x = y;
    y = z;
    printf("\nThe value of x and y after swapping is %c and %c", x, y);
    return 0;
}
