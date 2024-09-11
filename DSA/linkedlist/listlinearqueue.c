//program to implement the operations of linkes list in linear queue
#include<stdio.h>
#include<stdlib.h>
struct queuelist
{
    int info;
    struct queuelist *next;

};
struct queuelist *front=NULL;//front == first
struct queuelist *rear=NULL;//rear == last
void enqueue()
{
    int item;
    struct queuelist *Newnode;
    Newnode=(struct queuelist*)malloc(sizeof(struct queuelist));
    printf("Enter the item to be inserted:");
    scanf("%d",&item);
    Newnode->info=item;
    if (front==NULL)
    {
        Newnode->next=NULL;
        rear=front=Newnode;
    }
    else
    {
        Newnode->next=NULL;
        rear->next=Newnode;
        rear=Newnode;

    }
    


}
void dequeue()
{
    struct queuelist *temp;
    temp=front;
    if (front==NULL)
    {
        printf("The queue list is Empty\n");
    }
    else if (front==rear)
    {
        front=rear=NULL;
        printf("%d item is deleted from front\n",temp->info);
        free(temp);
    }
    else{
        front=front->next;
        printf("%d item is deleted from front\n",temp->info);
        free(temp);
    }
    
    
}
void display()
{
    struct queuelist *temp;
    temp=front;
    if (front==NULL)
    {
        printf("The queue list is empty\n");

    }
    else{
        while (temp!=rear)
        {
            printf("%d\t",temp->info);
            temp=temp->next;
        }
        printf("%d\n",rear->info);
        
    }
    
}
int main()
{
    int choice;
    printf("Menu driven program to show operations of linked list as queue\n");
    printf("choose\n1.Enqueue\n2.Dequeue\n3.Show\n4.Exit\n");
    do
    {
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting...\n");
            break;
        
        default:
            printf("Invaid Choice!!\n");
            break;
        }
    } while (choice!=4);
    
}