#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
typedef struct node *NODE;
NODE create_node();
NODE insert_front(NODE head);
NODE display(NODE head);
NODE insert_position(NODE head);
int main()
{
    NODE head=NULL;
    int choice,cnt;
    while(1)
    {
        printf("enter the choice");
        printf("1.INSERT FRONT\n 2.DISPLAY\n 3.INSERT POSITION\n 4.COUNT");
         scanf("%d",&choice);
    switch(choice)
    {
        case 1:head=insert_front(head);
        break;
        case 2:display(head);
        break;
        case 3:head=insert_position(head);
        break;
        case 4:cnt=count(head);
               printf("\ncount=%d",cnt);
        case 5:printf("THANK YOU");
        exit(0);
        default:printf("INVALID INPUT");
        break;
    }
}
}
NODE create_node()
{
    NODE n1;
   n1=(NODE)malloc(sizeof(struct node));
   if(n1==NULL)
   {
       printf("memory is not allocated");
       exit(0);
   }
   printf("enter the number");
   scanf("%d",&n1->data);
   n1->link=NULL;
   return n1;
}
NODE insert_front(NODE head)
{
    NODE temp;
    temp=create_node();
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->link=head;
        head=temp;
    }
    return head;
}
NODE display(NODE head)
{
    NODE temp;
    temp=head;
    if(temp==NULL)
    {
        printf("THE LIST IS EMPTY");
    }
    else
    {
        while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
    }
    printf("\n");
}
int count(NODE head)
{
    NODE temp;
    temp=head;
    int cnt=0;
    if(temp==NULL)
    {
        printf("list is empty");
    }
    else
    {
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->link;
        }
    }

    return cnt;
}
NODE insert_position(NODE head)
{
    int pos=1,i=1,cnt=0;
    NODE temp,p;
    printf("\nenter the position");
    scanf("%d",&pos);
    temp=create_node();
    cnt=count(head);
    if(pos<=0 || pos>cnt+2)
    {
        printf("INVALID POSITION");
        free(temp);
        return head;
    }
    else if(head==NULL && pos==1)
    {
        head=temp;
    }
    else if(pos==1)
    {
        temp->link=head;
        head=temp;
    }
    else
    {
        p=head;
        while(i<pos-1 && p!=NULL)
        {
            p=p->link;
            i++;
        }
        temp->link=p->link;
        p->link=temp;

    }
    return head;
}
