//program to find fibonacci series upto nth term
#include<stdio.h>
int fib(int k)
{
    if (k==1 || k==2)
    {
        return 1;
    }
    else {
        return fib(k-1)+fib(k-2);
    }
    
}
int main()
{
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonacci numbers upto %d terms; \n",n);
    for (int i = 1; i <=n; i++)
    {
        printf("%d\n",fib(i));
    }
    return 0;
    

}