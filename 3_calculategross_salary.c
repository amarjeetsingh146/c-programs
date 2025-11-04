#include <stdio.h>
void main()
{
    float user_salary;
    printf("Enter Your Basic salary : ");
    scanf("%f", &user_salary);
    float da = (20.0 / 100) * user_salary;
    float hra = (10.0 / 100) * user_salary;

    float gross_salary = user_salary + da + hra;
    printf("Gross salary is : %.2f", gross_salary);
}