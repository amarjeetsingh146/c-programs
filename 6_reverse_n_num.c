#include <stdio.h>
void main()
{
    int user_input, rev = 0;
    printf("enter a number : ");
    scanf("%d", &user_input);
    while (user_input != 0)
    {
        int rem = user_input % 10;
        rev = rev * 10 + rem;
        user_input = user_input / 10;
    }
    printf("Reverse digit is : %d", rev);
}