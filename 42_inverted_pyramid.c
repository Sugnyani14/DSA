#include<stdio.h>
void inverted(int);
int main()
{
    int rows;
    printf("enter the rows");
    scanf("%d",&rows);
    inverted(rows);
}
void inverted(int rows)
{
    int i,j;
    for(i=rows;i>=1;--i)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
