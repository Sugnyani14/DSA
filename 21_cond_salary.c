#include<stdio.h>
void main()
{
    float salary,gross,house_rent_allowance, dearness_allowance,exp;
    printf("Enter experience and salary:");
    scanf("%f%f",&exp,&salary);
    if(exp>5)
    {
    dearness_allowance=0.8*salary;
    house_rent_allowance=0.4*salary;
    gross=salary+dearness_allowance+house_rent_allowance;
    printf("Gross salary=%f",gross);
    }
    else
    {
    dearness_allowance=0.6*salary;
    house_rent_allowance=0.3*salary;
    gross=salary+dearness_allowance+house_rent_allowance;
    printf("Gross salary=%f",gross);
    }

}

