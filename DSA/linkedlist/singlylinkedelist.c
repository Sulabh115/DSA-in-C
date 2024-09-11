#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int info;
    struct Node *next;
};
struct Node *first=NULL;
struct Node *last=NULL;
void insert_first()
{
    int item;
    struct Node *Newnode;
    Newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter data to be inserted:");
    scanf("%d",&item);
    Newnode->info=item;
    if (first==NULL)
    {
        first=last=Newnode;
    }
    else{
        Newnode->next=first;
        first=Newnode;
    }
    
}
void insert_end()
{
    int item;
    struct Node *Newnode;
    Newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter data to be inserted:");
    scanf("%d",&item);
    Newnode->info=item;
    if (first==NULL)
    {
        first=last=Newnode;
    }
    else{
        last->next=Newnode;
        last=Newnode;
    }
    
}
void insert_pos()
{
    int pos,i;
    struct Node *Newnode,*temp;
    int item;
    Newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter data to be inserted:");
    scanf("%d",&item);
    printf("Enter position to be inserted:");
    scanf("%d",&pos);
    if (first==NULL)
    {
        first=last=Newnode;
    }
    else{
        temp=first;
        for (int i = 0; i < pos-1;)
        {
            temp=temp->next;
        }
        Newnode->next=temp->next;
        temp->next=Newnode;
        
    }
    
}
void delete_first()
{
    struct Node *temp;
    if (first==NULL)
    {
        printf("The linked list is Empty\n");

    }
    else if(first==last){
        temp=first;
        first=last=NULL;
        first=first->next;
        free(temp);
    }
    else{
        temp=first;
        first=first->next;
        printf("%d is succesfully deleted from first\n",temp->info);
        free(temp);
    }
    
}
void delete_last()
{
    struct Node *temp,*hold;
    if (first==NULL)
    {
        printf("The linked list is Empty\n");
    }
    else if (first==last)
    {
        temp=last;
        first=last=NULL;
        printf("%d is succesfully deleted from last\n",temp->info);
        free(temp);
    }
    else{
        temp=first;
        while (temp!=last)
        {
            temp=temp->next;
        }
        hold=temp->next;
        temp->next=NULL;
        free(hold);
        
    }

    
    
}
int main()
{
    int choice;
    printf("Menu driven program to show operations of singly linked list\n");
    pritnf("choose\n1.insert first\n2.insert end\n3.insert at specific ");
}
