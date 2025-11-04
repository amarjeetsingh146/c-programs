#include <stdio.h>
void main()
{
    int n;
    long long fact = 1;
    printf("enter a number :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        fact = fact * i;
    }
    printf("factorial is %d", fact);
}