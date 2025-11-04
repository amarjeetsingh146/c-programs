#include <stdio.h>
void main()
{
    int n;
    int sum = 0;
    printf("Enter n number : ");
    scanf("%d", &n);
    while (n != 0)
    {
        int rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("sum of digits is %d", sum);
}