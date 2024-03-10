#include<stdio.h>
void main()
{
  char ch;
  printf("Enter upper case character:");
  scanf(" %c",&ch);
  ch=ch+32;
  printf("Equivalent lower case: %c",ch);
}
