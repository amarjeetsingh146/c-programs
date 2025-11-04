#include <stdio.h>
void main()
{
    int user_input;
    printf("enter a number : ");
    scanf("%d", &user_input);
    if (user_input % 2 == 0)
    {
        printf(" %d is  even\n", user_input);
    }
    else
    {
        printf("%d is odd\n", user_input);
    }
}