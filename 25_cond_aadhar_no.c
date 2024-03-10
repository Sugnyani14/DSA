#include<stdio.h>
void main()
{
    long int aadh_no;
    char gender;
    int n;
    printf("Enter aadhar number and gender:");
    scanf("%ld %c",&aadh_no,&gender);
    n=aadh_no%10;
    if(n%2==0&&gender=='f')
    {
      printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}
