//program to implement double linked list
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int info;
    struct Node *next;
    struct Node *prev;
};
struct Node *first=NULL;
struct Node *last=NULL;
void insert_first()
{
    struct Node *Newnode;
    int item;
    Newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("enter info to be inserted:");
    scanf("%d",&item);
    Newnode->info=item;
    if (first==NULL)
    {
        first=last=Newnode;
    }
    else{
        Newnode->prev=NULL;
        Newnode->next=first;
        first->prev=Newnode;
        first=Newnode;
    }
    
}
void insert_end()
{
    struct Node *Newnode;
    int item;
    Newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter item to be inserted:");
    scanf("%d",&item);
    Newnode->info=item;
    if (first==NULL)
    {
        first=last=Newnode;
    }
    else
    {

        last->next=Newnode;
        Newnode->prev=last;
        Newnode->next=NULL;
        last=Newnode;
    }
    
}
void delete_first()
{
    struct Node *temp;
    temp=first;
    if (first==NULL)
    {
        printf("Linked list is empty\n");
    }
    else if (first==last)
    {
        first=NULL;
        last=NULL;
        printf("successfully deleted %d from first\n",temp->info);
        free(temp);
    }
    
    else{
        first=first->next;
        first->prev=NULL;
        printf("successfully deleted %d from first\n",temp->info);
        free(temp);
    }
    
}
void delete_last()
{
    struct Node *temp;
    temp=last;
    if (first==NULL)
    {
        printf("Linked list is empty\n");
    }
    else if (first==last)
    {
        first=NULL;
        last=NULL;
        printf("successfully deleted %d from last\n",temp->info);
        free(temp);
    }
    else{
        last=last->prev;
        last->next=NULL;
        printf("successfully deleted %d from last\n",temp->info);
        free(temp);
    }
    
    
}
void display()
{
    struct Node *temp;
    if (first==NULL)
    {
        printf("Linked list is empty\n");
    }
    else{
        temp=first;
        while (temp!=NULL)
        {
            printf("%d\t",temp->info);
            temp=temp->next;
        }
        printf("\n");
        

    }
    
}
int main()
{
    int choice;
    printf("\nMenu driven program to show operations of double linked list\n");
    printf("\nchoose\n1.insert at first\n2.insert at end\n3.delete first\n4.delete last\n5.display\n6.exit\n");
    do
    {
        printf("\nenter your choice:");
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
            printf("INVALID CHOICE!!!\n\n");
            break;
        }
    } while (choice!=6);
    return 0;
    
}
