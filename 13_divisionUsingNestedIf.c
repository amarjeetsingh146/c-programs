#include <stdio.h>
void main()
{
    float divisor, divident;
    float result = 0;
    printf("enter the diviident : ");
    scanf("%f", &divident);
    printf("enter the divisor : ");
    scanf("%f", &divisor);
    if (divisor == 0)
    {
        printf("Not Defined");
    }
    else
    {
        result = divident / divisor;
        printf("result is %.2f ", result);
    }
}