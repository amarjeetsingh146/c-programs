#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("enter a number :");
    scanf("%d", &n);
    for (; n != 0; n = n / 10)
    {
        int digit = n % 10;
        sum = sum + digit;
    }
    printf("Sum of Digits : %d", sum);
}