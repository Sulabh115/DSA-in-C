#include<stdio.h>
int stack[100], i,j, choice=0, n, top=-1;
void push();
void pop();
void Display();
int main()
{
    printf("Enter the number of elements in the stack:");
    scanf("%d",&n);
    printf("******Stack operations using array*****\n");
    printf("------------------------------\n");
    while (choice != 4)
    {
        printf("Choose one from the below options..\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit\n");
        printf("Enter your choice:");
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
            Display();
            break;
        case 4:
            printf("Exiting...\n");
            break;
        
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
    
}
void push()
{
    printf("you choose to push\n");
    int val;
    if (top==n)
    {
        printf("\nOverflow");
    }
    else{
        printf("Enter the value:");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
        printf("pushed value is:%d\n",val);
    }
}
void pop()
{
    printf("your choice is pop\n");
    if (top==-1)
    {
        printf("Underflow\n");

    }
    else{
        printf("your poped item is:%d\n",stack[top]);
        top=top-1;
        

    }

    
}
void Display()
{
    printf("you choose to display stack:\n");
    for ( i = top; i>=0; i--)
    {
        printf("%d\n",stack[i]);
    }
    if (top==-1)
    {
        printf("Stack is empty\n");
    }
    
    
}