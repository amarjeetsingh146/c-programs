#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("enter a number : ");
    scanf("%d", &n);
    while (n != 0)
    {
        int rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("sum is %d", sum);
}