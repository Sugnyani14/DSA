#include<stdio.h>
void main()
{
    int bs,hra,da,gs;
    printf("Enter basic salary:");
    scanf("%d",&bs);
    if(bs<=0)
    {
        printf("Invalid");
        exit(0);
    }
    else if(bs<15000)
    {
        hra=0.1*bs;
        da=0.5*bs;
        gs=bs+hra+da;
        printf("Gross salary=%d",gs);
    }
     else if(bs>=15000&&bs<30000)
    {
        hra=0.2*bs;
        da=0.6*bs;
        gs=bs+hra+da;
        printf("Gross salary=%d",gs);
    }
    else if(bs>=30000&&bs<50000)
    {
        hra=0.3*bs;
        da=0.7*bs;
        gs=bs+hra+da;
        printf("Gross salary=%d",gs);
    }
    else if(bs>=50000)
    {
        hra=0.4*bs;
        da=0.8*bs;
        gs=bs+hra+da;
        printf("Gross salary=%d",gs);
    }
    else
    {
        printf("Invalid");
    }
}
