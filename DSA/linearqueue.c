//menu driven program for array implementation of linear queue
#include<stdio.h>
#define SIZE 20
struct queue
{
    int item[SIZE];
    int rear;
    int front;

};
typedef struct queue qu;
void insert(qu*);
void delete(qu*);
void display(qu*);
void main()
{
    int ch;
    qu *q;
    q->rear=-1;
    q->front=0;
    printf("Menu for program:\n");
    printf("1:Insert\n2:delete\n3:display\n4:exit\n");
    do
    {
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insert(q);
            break;
        case 2:
            delete(q);
            break;
        case 3:
            display(q);
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    } while (ch<5);
    
}