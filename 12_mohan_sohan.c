#include<stdio.h>
#include<math.h>
void main()
{
    float dist,time,speed,x1,x2,y1,y2;
    printf("Enter the co-ordinates and speed:");
    scanf("%f%f%f%f%f",&x1,&x2,&y1,&y2,&speed);
    dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    time=dist/speed;
    printf("Distance=%f Time=%f",dist,time);
}
