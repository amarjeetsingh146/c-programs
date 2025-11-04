#include <stdio.h>
void main()
{
    int boy_1, boy_2, boy_3;
    printf("enter the age of boy_1 boy_2 boy_3: \n");
    scanf("%d%d%d", &boy_1, &boy_2, &boy_3);
    if (boy_1 < boy_2 && boy_1 < boy_3)
    {
        printf("boy_1 is yongest");
    }
    else if (boy_2 < boy_1 && boy_2 < boy_3)
    {
        printf("boy_2 is youngest");
    }
    else if (boy_3 < boy_1 && boy_3 < boy_2)
    {
        printf("boy_3 is youngest");
    }
    else
    {
        printf("Two or more boys have the same youngest age.");
    }
}