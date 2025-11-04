#include <stdio.h>
void main()
{
    int a, b, c, temp = 0;
    printf("enter a b c :\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    printf("Sorted values : %d, %d, %d", a, b, c);
}