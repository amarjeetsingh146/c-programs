#include <stdio.h>
#include <ctype.h>
void main()
{
    char ch;
    printf("enter any char :");
    scanf("%c", &ch);
    if (isupper(ch))
    {
        printf("%c is capital letter\n", ch);
    }
    else if (islower(ch))
    {
        printf("%c is small letter\n", ch);
    }
    else if (isdigit(ch))
    {
        printf("%c is a digit\n", ch);
    }
    else
    {
        printf("%c is special character", ch);
    }
}