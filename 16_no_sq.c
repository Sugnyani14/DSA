#include<stdio.h>
int square(int);
void main()
{
    int n;
    printf("enter the total number to be squared");
    scanf("%d",&n);
    square(n);
}
int square(int n)
{
    int s,i;
    for(i=0;i<n;i++)
    {
    int sq;
    printf("\nenter the the number to be squared=");
    scanf("%d",&s);
    sq=s*s;
    printf("square of the number %d=%d",s,sq);
    }
}
