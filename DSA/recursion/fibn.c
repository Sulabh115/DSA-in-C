#include<stdio.h>
int fibonacci(int k)
{
    if (k==1 || k==2)
    {
        return 1;
    }
    else{
        return fibonacci(k-1)+fibonacci(k-2);
    }
    
}
int main()
{
    int n;
    printf("Enter the position:");
    scanf("%d",&n);
    printf("The fibonacci number at:\n%d position is: %d\n",n,fibonacci(n));
    return 0;
}