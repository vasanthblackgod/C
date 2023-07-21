#include<stdio.h>
#include<stdlib.h>
void insert();
void display();
struct node
{
int data;
struct node *next;
}*newnode,*head,*temp;
int main()
{
   insertatbeginning();
    display();
}
void insert()
{
int choice=1;
while(choice==1)
{
newnode=(struct node*)(malloc(sizeof(struct node)));
printf("Enter the int");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0)
{
    head=newnode;
    temp=newnode;
}
else
{
    temp->next=newnode;
    temp=temp->next;
}
printf("enter choice");
scanf("%d",&choice);
}
}
void display()
{
    temp=head;
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
}
void insertatbeginning()
{
int choice=1;
while(choice==1)
{
newnode=(struct node*)(malloc(sizeof(struct node)));
printf("Enter the int");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0)
{
    head=newnode;
    temp=newnode;
}
else
{
newnode->next=head;
head=newnode;
}
printf("enter choice");
scanf("%d",&choice);
}
}


