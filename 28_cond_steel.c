#include<stdio.h>
void main()
{
    float hd,cc,ts;
    printf("Enter the value of hardness, carbon content, tensile strength of steel:");
    scanf("%f%f%f",&hd,&cc,&ts);
    if(hd>50&&cc<0.7&&ts>5600)
    {
        printf("Grade 10");
    }
    else if(hd>50&&cc<0.7)
    {
        printf("Grade 9");
    }
    else if(cc<0.7&&ts>5600)
    {
        printf("Grade 8");
    }
    else if(hd>50&&ts>5600)
    {
        printf("Grade 7");
    }
    else if(hd>50||cc<0.7||ts>5600)
    {
        printf("Grade 6");
    }
    else
    {
        printf("Grade 5");
    }
}
