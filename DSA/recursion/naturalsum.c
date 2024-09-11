#include<stdio.h>
int sum_natural(int n)
{
    if (n==1)
    {
        return 1;
    }
    else{
        return n+sum_natural(n-1);
    }
    
}
int main()
{
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("The sum of %d natural numbers is:%d\n",n,sum_natural(n));
    return 0;
}