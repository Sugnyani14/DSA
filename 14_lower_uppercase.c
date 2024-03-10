#include<stdio.h>
void main()
{
  char ch;
  printf("Enter lower case character:");
  scanf(" %c",&ch);
  ch=ch-32;
  printf("Equivalent upper case: %c",ch);
}
