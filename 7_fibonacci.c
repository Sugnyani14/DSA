#include<stdio.h>
int fib(int);
void main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    fib(n);
}
int fib(int n)
{
    int a=0,b=1,next_term,i;
    for(i=0;i<n;i++)
    {
        printf("%d",a);
        next_term=a+b;
        a=b;
        b=next_term;
    }
}
