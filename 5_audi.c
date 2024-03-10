#include<stdio.h>
void main()
{
    float ptrl_pr,milg=14,dist,worth=1066.64,ltr;
    printf("Enter the ptrl pr");
    scanf("%f",&ptrl_pr);
    ltr=worth/ptrl_pr;
    dist=ltr*milg;
    printf("Distance travelled=%f",dist);
}
