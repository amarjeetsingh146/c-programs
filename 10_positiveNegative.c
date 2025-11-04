#include <stdio.h>
void main()
{
    int user_input;
    printf("enetr the number : ");
    scanf("%d", &user_input);
    if (user_input > 0)
    {
        printf("%d is positive\n", user_input);
    }
    else if (user_input < 0)
    {
        printf("%d is negative\n", user_input);
    }
    else
    {
        printf("%d", user_input);
    }
}