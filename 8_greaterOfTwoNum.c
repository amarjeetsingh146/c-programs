#include <stdio.h>
void main()
{
    int a, b;
    printf("enter the value of a : ");
    scanf("%d", &a);
    printf("enter the value of b : ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("%d is greater\n", a);
    }
    else
    {
        printf("%d is greater\n", b);
    }
}