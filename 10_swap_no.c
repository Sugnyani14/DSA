#include<stdio.h>
void main()
{
    int A,B;
    printf("Enter value of A,B:");
    scanf("%d%d",&A,&B);
    printf("Number before swapping A=%d B=%d",A,B);
    A=A+B;
    B=A-B;
    A=A-B;
    printf("Number after swapping A=%d B=%d",A,B);
}
