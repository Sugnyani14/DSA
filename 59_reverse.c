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
NODE reverse(NODE head);
NODE display(NODE head);
int main()
{
    NODE head=NULL;
    int choice;
    while(1)
    {
        printf("enter the choice");
        printf("1.INSERT FRONT\n 2.DISPLAY\n 3.REVERSE");
         scanf("%d",&choice);
    switch(choice)
    {
        case 1:head=insert_front(head);
        break;
        case 2:display(head);
        break;
        case 3:head=reverse(head);
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
NODE reverse(NODE head)
{
    NODE temp,p=NULL,next_node;
    temp=head;
    if(temp==NULL)
    {
        printf("LIST IS EMPTY");
    }
    else{

    while(temp!=NULL)
    {
      next_node=temp->link;
      temp->link=p;
      p=temp;
      temp=next_node;
    }
    }
    return p;
}
