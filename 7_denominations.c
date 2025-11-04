#include <stdio.h>
void main()
{
    int amount, remaining;
    int n500, n200, n100, n50, n20, n10, n1;
    printf("enter the amount you want to withdraw : ");
    scanf("%d", &amount);

    remaining = amount;

    n500 = remaining / 500;
    remaining = remaining % 500;

    n200 = remaining / 200;
    remaining = remaining % 200;

    n100 = remaining / 100;
    remaining = remaining % 100;

    n50 = remaining / 50;
    remaining = remaining % 50;

    n20 = remaining / 20;
    remaining = remaining % 20;

    n10 = remaining / 10;
    remaining = remaining % 10;

    n1 = remaining;

    printf("%d Notes of 500 \n", n500);
    printf("%d Notes of 200 \n", n200);
    printf("%d Notes 0f 100 \n", n100);
    printf("%d Notes 0f 50 \n", n50);
    printf("%d Notes 0f 20 \n", n20);
    printf("%d Notes 0f 10 \n", n10);
    printf("%d Notes of 1 \n", n1);
}