//write a c code to convert distance from km to m, cm, feet, inches
#include<stdio.h>
void main()
{
    float dist,d_m,d_cm,d_ft,d_in;
    printf("Enter distance:");
    scanf("%f",&dist);
    d_m=dist*1000;
    d_cm=dist*10000;
    d_ft=dist*3280.84;
    d_in=dist*39370.1;
    printf("d_m=%f d_cm=%f d_ft=%f d_in=%f",d_m,d_cm,d_ft,d_in);
}
