#include<stdio.h>
void main()
{
    float salary,gross,house_rent_allowance, dearness_allowance;
    printf("Enter salary:");
    scanf("%f",&salary);
    dearness_allowance=0.4*salary;
    house_rent_allowance=0.2*salary;
    gross=salary+dearness_allowance+house_rent_allowance;
    printf("Gross salary=%f",gross);
}
