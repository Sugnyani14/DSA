#include<stdio.h>
void main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    if(n%2==0&&n>=2&&n<=10)
    {
        printf("Not weird");
    }
    else
    {
        printf("Weird");
    }
}
