#include<stdio.h>
void main()
{
    int r_no,fees,rank;
    float cgpa;
    char div;
    printf("Enter the details R_no,fees,rank,cgpa,div:");
    scanf("%d%d%d%f %c",&r_no,&fees,&rank,&cgpa,&div);
    printf("Student details are as follows:r_no=%d fees=%d rank=%d cgpa=%f div=%c",r_no,fees,rank,cgpa,div);
}
