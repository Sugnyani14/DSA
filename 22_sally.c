#include<stdio.h>
void main()
{
    int x,total,bal;
    printf("Enter the value of x and balance");
    scanf("%d%d",&bal,&x);
    if(x%5==0)
    {
        total=bal-x;
        printf("Total balance=%d",total);
    }
    else
    {
        printf("Invalid amount");
    }

}
