//program to implement the operations of stack
#include<stdio.h>
#include<stdlib.h>
int stack[100],n,i,j;
int top=-1;
void push()
{
    int item;
    if (top==n)
    {
        printf("Stack Overflow\n");
    }
    else{
        printf("Enter the data to be pushed:");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }
    
}
void pop()
{
    int item;
    if (top<0)
    {
        printf("Stack is Empty\n");
    }
    else{
        item=stack[top];
        top=top-1;
        printf("the poped item is:%d\n",item);

    }
    
}
void display()
{
    if (top<0)
    {
        printf("Stack is Empty\n");
    }
    else{
        i=top;
        while (i>=0)
        {
            printf("%d\t",stack[i]);
            i=i-1;
        }
        printf("\n");
        
        
    }
}
int main()
{
    int choice,size;
    printf("Menu driven program to show stack operations\n");
    printf("Enter the size of stack:");
    scanf("%d",&size);
    n=size-1;
    printf("choose\n1.push\n2.pop\n3.display\n4.exit\n");
    do
    {
        printf("\nEnter you choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("you choose to push\n");
            push();
            break;
        case 2:
            printf("you choose to pop\n");
            pop();
            break;
        case 3:
            printf("you choose to display stack\n");
            display();
            break;
        case 4:
            printf("Exitinig....\n");
            break;
        
        default:
            printf("Invalid choice!!!!\n");
            break;
        }
    } while (choice!=4);
    
}
