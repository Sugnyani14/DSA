#include<stdio.h>
void main()
{
    float m1,m2,m3,m4,m5,agg_marks,per_marks;
    printf("Enter marks of 5 sub:");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    agg_marks=m1+m2+m3+m4+m5;
    per_marks=agg_marks/5;
    printf("Aggregate marks=%f Percentage=%f",agg_marks,per_marks);
}
