//array implementation of circular queue 
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
struct cqueue
{
    int item[SIZE];
    int rear;
    int front;

};
typedef struct cqueue qu;
void insert(qu*);
void delete(qu*);
void display(qu*);
int main()
{
    int ch;
    qu q;
    q.rear = SIZE-1;
    q.front = SIZE-1;
    printf("Menu for program:\n");
    printf("1:Enqueue\n2:Dequeue\n3:Display\n4:Exit\n");
    do
    {
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insert(&q);
            break;
        case 2:
            delete(&q);
            break;
        case 3:
            display(&q);
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("INVALID CHOICE\n");
            break;
        }
    } while (ch!=4);
    return 0;
}
 void insert(qu* q)
    {
        int d;
        if ((q->rear+1)%SIZE==q->front)
        {
            printf("Queue is full\n");
        }
        else
        {
            q->rear=(q->rear+1)%SIZE;
            printf("Enter data to be inserted:");
            scanf("%d",&d);
            q->item[q->rear]=d;
        }
        
    }
    void delete(qu* q)
    {
        if (q->rear==q->front)
        {
            printf("Queue is empty\n");

        }
        else 
        {
            q->front=(q->front+1)%SIZE;
            printf("Deleted item is:");
            printf("%d\n",q->item[q->front]);
        }
        
    }
    void display(qu *q)
    {
        int i;
        if (q->rear==q->front)
        {
             printf("Queue is empty\n");
        }
        else{
            printf("Items of queue are:\n");
            for (int i = (q->front+1)%SIZE; i!=(q->rear+1); i=(i+1)%SIZE)
            {
                printf("%d\t",q->item[i]);
            }
            printf("\n");
            
        }
        
    }
    
