#include <stdio.h>
#include <stdlib.h>

void push();
void pop();
struct node
{
int a;
struct node *next;
}*top, *head;

void main ()
{
    int choice=0;
    printf("\nStack operations using linked list\n");
    while(choice != 3)
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\n Enter your choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: exit(0); break;

            default:
            {
                printf("Please Enter valid choice ");
            }
    };
}
}
void push ()
{
    struct node ptr =(struct node*)(malloc(sizeof(struct node)));

        printf("Enter the value");
        scanf("%d",&a);
        if(top==NULL)
        {
            ptr->next=NULL;
            top=ptr;
        }
        else
        {
            ptr->a= a;
            ptr->next = top;
            top=ptr;

        }

}

void pop()
{
    int item;
    struct node *ptr;
    if (top == NULL)
    {
        printf("Underflow");
    }
    else
    {
        item = top->a;
        ptr = top;
        top = top->next;
        free(ptr);
        display();
    }
}

}
