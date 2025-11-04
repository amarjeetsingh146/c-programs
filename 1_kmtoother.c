#include <stdio.h>
void main()
{
    float km;
    printf("enter the distance in km : ");
    scanf("%f", &km);
    float convert_meter = km * 1000;
    float convert_cm = km * 100000;
    float convert_mm = km * 1000000;
    float convert_inches = km * 39370.08;
    float convert_feet = km * 3280.84;

    printf("%.2f m\n", convert_meter);
    printf("%.2f cm\n", convert_cm);
    printf("%.2f mm\n", convert_mm);
    printf("%.2f inches\n", convert_inches);
    printf("%.2f feet\n", convert_feet);
}