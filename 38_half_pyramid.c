#include<stdio.h>
int pyramid(int);
int main()
{
    int rows;
    printf("enter the number of rows");
    scanf("%d",&rows);
    pyramid(rows);
}
int pyramid(int rows)
{
    int i,j;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
         printf("\n");
    }

}
