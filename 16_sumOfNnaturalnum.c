#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("enter the n to print sum of n natural number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum of natural number is : %d", sum);
}