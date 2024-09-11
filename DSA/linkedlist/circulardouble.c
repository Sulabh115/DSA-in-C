//program to implement circular double linked list
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int info;
    struct Node *prev;
    struct Node *next;

};
struct Node *first=NULL;
struct Node *last=NULL;
void insert_first()
{
    int item;
    struct Node *Newnode;
    Newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the info:");
    scanf("%d",&item);
    Newnode->info=item;
    if (first==NULL)
    {
        first=last=Newnode;
        first->next=last;
        first->prev=last;
    }
    else{
        first->prev=Newnode;
        Newnode->next=first;
        first=Newnode;
        Newnode->prev=last;
        last->next=first;
    }
    
}
void insert_end()
{
    int item;
    struct Node *Newnode;
    Newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the info:");
    scanf("%d",&item);
    Newnode->info=item;
    if (first==NULL)
    {
        first=last=Newnode;
        first->prev=last;
        first->next=last;
    }
    else{
        last->next=Newnode;
        Newnode->prev=last;
        Newnode->next=first;
        first->prev=Newnode;
        last=Newnode;
    }
    
}
void delete_first()
{
    struct Node *temp;
    if (first==NULL)
    {
        printf("The linked list is Empty\n");
    }
    else if (first==last)
    {
        temp=first;
        first=last=NULL;
        printf("%d is successfully deleted from first\n",temp->info);
        free(temp);
    }
    
    else{
        temp=first;
        first=first->next;
        first->prev=last;
        last->next=first;
        printf("%d is successfully deleted from first\n",temp->info);
        free(temp);
    }
    
}
void delete_last()
{
    struct Node *temp;
    if (first==NULL)
    {
        printf("The linked list is Empty\n");
    }
    else if (first==last)
    {
        temp=last;
        first=last=NULL;
        printf("%d is successfully deleted from last\n",temp->info);
        free(temp);
    }
    
    else{
        temp=last;
        last=last->prev;
        last->next=first;
        first->prev=last;
        printf("%d is successfully deleted from last\n",temp->info);
        free(temp);
    }
    
}
void display()
{
    struct Node *temp;
    if (first==NULL)
    {
        printf("The linked list is empty\n");
    }
    else{
        temp=first;
        while (temp!=last)
        {
            printf("%d\t",temp->info);
            temp=temp->next;
        }
        printf("%d\t\n",last->info);
        
    }
    
}
int main()
{
    int choice;
    printf("****circular doubly linked list****\n");
    printf("choose\n1.insert first\n2.insert last\n3.delete first\n4.delete last\n5.display\n6.exit\n");
    do
    {
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insert_first();
            break;
        case 2:
            insert_end();
            break;
        case 3:
            delete_first();
            break;
        case 4:
            delete_last();
            break;
        case 5:
            display();
            break;
        case 6:
            printf("Exiting...\n");
            break;
        
        default:
            printf("Invalid choice!!!\n");
            break;
        }
    } while (choice!=6);
    
}