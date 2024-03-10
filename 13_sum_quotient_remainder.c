#include<stdio.h>
void main()
{
    int n1,n2;
    float sum,rem,quo;
    printf("Enter n1 and n2:");
    scanf("%d%d",&n1,&n2);
    quo=n1/n2;
    rem=n1%n2;
    sum=quo+rem;
    printf("Quotient=%f Remainder=%f Sum=%f",quo,rem,sum);
}
