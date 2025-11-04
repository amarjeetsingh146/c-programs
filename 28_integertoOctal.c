#include <stdio.h>
int main()
{
    int n, rem, oct = 0, place = 1;
    printf("enter an integer : ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 8;
        oct = oct + rem * place;
        n = n / 8;
        place = place * 10;
    }
    printf("ocatal conversion is : %d", oct);

    return 0;
}