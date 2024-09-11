#include<stdio.h>
int main()
{
    int n;
    long int fact;
    long int factorial(int n);
    printf("Enter the number:");
    scanf("%d",&n);
    fact=factorial(n);
    printf("The factorial of %d is %ld\n",n,fact);
    return 0;
}
long int factorial(int a)
{
    if (a==0)
    {
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
    
}