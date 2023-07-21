#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insertfront();
void insertend();
void insertmid();
void deletefront();
void deleteend();
void deletemid();
void count();
void search();
void exit();
struct node
{
 int data;
 struct node *next,*prev;
}*head=NULL,*temp,*newnode,*nextnode,*tail;
int main()
{
    int option;
    while(1)
    {
        printf("\n\n***DOUBLE LINKED LIST***\n\n");
        printf("1.Create\n");
        printf("2.display\n");
        printf("3.insertfront\n");
        printf("4.insertend\n");
        printf("5.insertmid\n");
        printf("6.deletefront\n");
        printf("7.deleteend\n");
        printf("8.deletemid\n");
        printf("9.count the elements\n");
        printf("10.search the element\n");
        printf("11.exit\n");
        scanf("%d",&option);
        switch(option)
        {
           case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insertfront();
                break;
            case 4:
                insertend();
                break;
            case 5:
                insertmid();
                break;
            case 6:
                deletefront();
                break;
            /*case 7:
                deleteend();
                break;
            case 8:
                deletemid();
                break;
            case 9:
                count();
                break;
             case 10:
                search();
                break;*/

        }
    }
}
        void create()
        {
            int n,i;
            printf("Enter the number of elements");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
              newnode=(struct node*)(malloc(sizeof(struct node)));
              printf("Enter the int");
              scanf("%d",&newnode->data);
              newnode->next=newnode->prev=NULL;
             if(head==NULL)
             {
               head=newnode;
               temp=newnode;
               tail=newnode;
             }
             else
             {
               temp->next=newnode;
               temp=newnode;
             }
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
        }
       void insertfront()
       {
           temp=head;
           newnode->next=temp;
           temp->prev=newnode;
           head=newnode;
       }
       void insertend()
       {
           temp=head;
           while(temp!=NULL)
           {
               printf("%d",temp->prev);
               temp=temp->next;
           }
       }
           void insertmid()
           {
               int pos,i;
               printf("Enter the number of elements");
               scanf("%d",&pos);
               temp=head;
               for(i=1;i<pos;i++)
               {
                   temp=temp->next;
               }
                newnode->prev=temp->prev;
                newnode->next=temp;
                temp->prev->next=newnode;
                temp->prev=newnode;
            }
            void deletefront()
            {
                temp=head;
                head=temp->next;
                temp->next=NULL;
                temp->prev=NULL;
            }






