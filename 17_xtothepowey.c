#include <stdio.h>
void main()
{
    int x, y;
    long long result = 1;
    printf("enter the base(X) :");
    scanf("%d", &x);
    printf("enter the exponent of (Y) :");
    scanf("%d", &y);

    for (int i = 1; i <= y; i++)
    {
        result = result * x;
    }
    printf("The result is %d ", result);
}