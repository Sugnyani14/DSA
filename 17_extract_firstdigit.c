#include<stdio.h>
void main()
{
    int f_d,num,n;
    printf("Enter number and total digits-1:");
    scanf("%d%d",&num,&n);
    f_d=num/pow((10),n);
    printf("First digit=%d",f_d);
}

