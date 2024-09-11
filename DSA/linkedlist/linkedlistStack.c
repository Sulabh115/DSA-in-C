//program to implement operations of linked list as stack
#include<stdio.h>
#include<stdlib.h>
struct stacklist
{
    int info;
    struct stacklist *next;
};
struct stacklist *top=NULL; //top == first
void push()
{
    int item;
    struct stacklist *Newnode;
    Newnode=(struct stacklist*)malloc(sizeof(struct stacklist));
    printf("Enter The item to be pushed:");
    scanf("%d",&item);
    Newnode->info=item;
    if (top==NULL)
    {
        Newnode->next=NULL;
        top=Newnode;
    }
    else{
        Newnode->next=top;
        top=Newnode;
    }
    
}
void pop()
{
    struct stacklist *temp;
    if (top==NULL)
    {
        printf("Stack is empty\n");

    }
    else{
        temp=top;
        top=top->next;
        printf("%d is deleted from top\n",temp->info);
        free(temp);
    }
    
}
void display()
{
    struct stacklist *temp;
    temp=top;
    if (top==NULL)
    {
        printf("Stack list is empty\n");
    }
    else{
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
    printf("Menu driven program to show operations of Linked list as stack\n");
    printf("Choose\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
    do
    {
        printf("\nEnter your choice");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting...\n");
            break; 
        default:
            printf("Invalid Choice!!\n");
            break;
        }
    } while (choice!=4);
    
}