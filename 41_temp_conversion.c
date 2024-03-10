#include<stdio.h>
void main()
{
  float temp,temp_k,temp_f;
  printf("Enter temp:");
  scanf("%f",&temp);
  temp_f=((temp*(9/5))+32);
  temp_k=temp+273.15;
  printf("Temp_F=%f Temp_K=%f",temp_f,temp_k);
}

