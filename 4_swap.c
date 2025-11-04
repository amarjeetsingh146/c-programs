#include <stdio.h>
void main()
{
    int a, b, temp = 0;
    printf("enter the value of a : ");
    scanf("%d", &a);
    printf("enter the value of b : ");
    scanf("%d", &b);
    printf(" a = %d and b = %d before swapping\n", a, b);
    // swaping logic
    temp = a;
    a = b;
    b = temp;
    printf(" a = %d and b = %d After swapping", a, b);
}