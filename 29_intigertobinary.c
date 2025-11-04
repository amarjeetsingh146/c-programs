#include <stdio.h>
int main()
{
    int n, bin = 0, rem, place = 1;
    printf("enter a number to convert binary :");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 2;
        bin = bin + rem * place;
        n = n / 2;
        place = place * 10;
    }
    printf("Binary of given number is %d", bin);
    return 0;
}