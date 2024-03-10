#include<stdio.h>
float t_salary(char,float);
int main()
{
    char gender;
    float salary, total_salary=0;
    printf("enter the gender");
    scanf(" %c",&gender);
    printf("enter the salary");
    scanf("%f",&salary);
    total_salary=t_salary(gender,salary);
    printf("total salary=%.2f",total_salary);
    return 0;
}
float t_salary(char gender,float salary)
{
    float total=salary;
    switch(gender)
    {
    case 'M':
        if(salary<=10000)
        {
            total=total+salary*0.5;
        }
        else if(salary>10000)
        {
            total=total+(salary*0.7);
        }
     break;
    case 'F':
        if(salary>=10000)
        {
            total=total+(salary*0.1);
        }
        else if(salary<10000)
        {
            total=total+(salary*0.5);
        }
        break;
    default:
        printf("INVALID GENDER");
    }
    return total;
}

