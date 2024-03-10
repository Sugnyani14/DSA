#include<stdio.h>
void main()
{
    int exp;
    char cat;
    float sal,t_sal;
    printf("Enter category,exp,sal:");
    scanf(" %c%d%f",&cat,&exp,&sal);
    if(cat=='m'&&exp>=5&&exp<=7)
    {
        t_sal=sal+(0.1*sal);
        printf("Total salary=%f",t_sal);
    }
    else if(cat=='m'&&exp>=8&&exp<10)
    {
        t_sal=sal+(0.2*sal);
        printf("Total salary=%f",t_sal);
    }
    else if(cat=='m'&&exp>=10)
    {
        t_sal=sal+(0.3*sal);
        printf("Total salary=%f",t_sal);
    }
    else if(cat=='e'&&exp>=5&&exp<=7)
    {
        t_sal=sal+(0.1*sal);
        printf("Total salary=%f",t_sal);
    }
    else if(cat=='e'&&exp>=8&&exp<10)
    {
        t_sal=sal+(0.2*sal);
        printf("Total salary=%f",t_sal);
    }
    else if(cat=='e'&&exp>=10)
    {
        t_sal=sal+(0.3*sal);
        printf("Total salary=%f",t_sal);
    }
    else if(cat=='o'&&exp>=5&&exp<=7)
    {
        t_sal=sal+(0.1*sal);
        printf("Total salary=%f",t_sal);
    }
    else if(cat=='o'&&exp>=8&&exp<10)
    {
        t_sal=sal+(0.2*sal);
        printf("Total salary=%f",t_sal);
    }
    else if(cat=='o'&&exp>=10)
    {
        t_sal=sal+(0.3*sal);
        printf("Total salary=%f",t_sal);
    }
}
