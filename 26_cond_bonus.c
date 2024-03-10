#include<stdio.h>
void main()
{
    int t_sal,sal,exp;
    char gen;
    printf("Enter salary,experience,gender:");
    scanf("%d%d %c",&sal,&exp,&gen);
    if(gen=='m'&&exp>=5&&exp<=7)
    {
      t_sal=sal+(0.2*sal);
      printf("total salary=%d",t_sal);
    }
    else
    {
        t_sal=sal+(0.3*sal);
        printf("total salary=%d",t_sal);
    }
}
