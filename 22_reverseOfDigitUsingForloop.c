#include <stdio.h>
void main()
{
    int n, rev = 0;
    printf("entera number : ");
    scanf("%d", &n);

    for (; n != 0; n = n / 10)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
    }
    printf("Reverse is %d", rev);
}