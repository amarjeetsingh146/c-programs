#include <stdio.h>
void main()
{
    int a, b;
    printf("enter the a : \n");
    scanf("%d", &a);
    printf("enter the b :\n");
    scanf("%d", &b);
    printf(" a = %d and b = %d before swapping\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf(" a = %d and b = %d After swapping", a, b);
}