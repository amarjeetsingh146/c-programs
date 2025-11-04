#include <stdio.h>
void main()
{
    int days;
    float fine = 0.0;

    printf("Enter the number of days late: ");
    scanf("%d", &days);

    if (days <= 5)
    {
        fine = days * 0.50;
        printf("Fine = Rs %.2f\n", fine);
    }
    else if (days <= 10)
    {
        fine = 5 * 0.50 + (days - 5) * 1.0;
        printf("Fine = Rs %.2f\n", fine);
    }
    else if (days <= 30)
    {
        fine = 5 * 0.50 + 5 * 1.0 + (days - 10) * 5.0;
        printf("Fine = Rs %.2f\n", fine);
    }
    else
    {
        printf("Your membership is cancelled.\n");
    }
}
