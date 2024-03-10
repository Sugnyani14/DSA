#include<stdio.h>
void main()
{
    float avg_m;
    printf("Enter the average marks:");
    scanf("%f",&avg_m);
    if(avg_m<0&&avg_m>100)
    {
        printf("Invalid average marks");
    }
    else if(avg_m>=80&&avg_m<=100)
    {
        printf("Distinction");
    }
    else if(avg_m>=60&&avg_m<80)
    {
        printf("1st division");
    }
    else if(avg_m>=50&&avg_m<50)
    {
        printf("2nd division");
    }
    else if(avg_m>=40&&avg_m<50)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }
}
