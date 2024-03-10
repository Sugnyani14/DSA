#include<stdio.h>
void main()
{
    float prnc_amt,tym,rate_of_int,s_int;
    printf("Enter principle amt,time,rate of interest:");
    scanf("%f%f%f",&prnc_amt,&tym,&rate_of_int);
    s_int=((prnc_amt*tym*rate_of_int)/100);
    printf("Simple interest=%f",s_int);
}
