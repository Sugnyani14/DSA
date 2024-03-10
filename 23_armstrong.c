#include<stdio.h>
int arm(int);
void main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    arm(n);
}
int arm(int n)
{
    int rem,arms=0,temp=n;
    while(n!=0)
    {
    rem=n%10;
    arms=arms+rem*rem*rem;
    n=n/10;
    }
    if(temp==arms)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not a armstrong number");
    }
}
