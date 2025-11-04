#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter the a : ");
    scanf("%d", &a);
    printf("enter the  b : ");
    scanf("%d", &b);
    printf("enter the c : ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("%d is greater", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is greater", b);
    }
    else
    {
        printf("%d is greater", c);
    }
}