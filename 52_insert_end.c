#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
typedef struct node *NODE;
NODE insert_front(NODE head);
NODE insert_end(NODE head);
NODE create_node();
NODE display(NODE head);
int main()
{
    NODE head=NULL;
    int choice;
    while(1)
    {
        printf("enter the choice ");
        printf("1.INSERT END\n 2.DISPLAY\n 3.INSERT FRONT");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:head=insert_end(head);
            break;
            case 2:display(head);
            break;
            case 3:head=insert_front(head);
            break;
            case 4:printf("THANK YOU");
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
    }
    printf("enter the number");
    scanf("%d",&n1->data);
    n1->link=NULL;
    return n1;
}
NODE insert_end(NODE head)
{
    NODE temp,p;
    temp=create_node();
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
      p=head;
      while(p->link!=NULL)
      {
          p=p->link;
      }
    p->link=temp;
    temp->link=NULL;
    }
    return head;
}
NODE display(NODE head)
{
    NODE temp=head;
    if(temp==NULL)
    {
        printf("list is empty");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->link;
        }
    }
    return head;
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
