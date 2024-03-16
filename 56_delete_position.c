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
NODE delete_position(NODE head);
NODE display(NODE head);
int main()
{
    NODE head=NULL;
    int choice,cnt;
    while(1)
    {
        printf("enter the choice");
        printf("1.INSERT FRONT\n 2.DISPLAY\n 3.DELETE POSITION\n 4.COUNT");
         scanf("%d",&choice);
    switch(choice)
    {
        case 1:head=insert_front(head);
        break;
        case 2:display(head);
        break;
        case 3:head=delete_position(head);
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
NODE delete_position(NODE head)
{
    NODE temp=head;
    NODE p;
    int pos=1,i=1,cnt=0;
    printf("\nenter the position");
    scanf("%d",&pos);
    cnt=count(head);
    if(pos<=0 || pos>cnt)
    {
        printf("INVALID POSITION");
        exit(0);
    }
    else if(temp==NULL)
    {
        head=NULL;
        printf("Deleted=%d",temp->data);
        free(temp);
    }
    else if(pos==1)
    {
        head=temp->link;
        printf("\nDeleted=%d",temp->data);
        free(temp);
    }
    else
    {
        p=temp;
        while(i<pos-1)
        {
            p=p->link;
            i++;
        }
        temp=p->link;
        p->link=temp->link;
        temp->link=NULL;
        printf("\nDeleted=%d",temp->data);

        free(temp);

    }
    return head;
}
