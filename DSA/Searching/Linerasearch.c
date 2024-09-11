#include<stdio.h>
int main()
{
    int a[50],n,key,i,flag;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    for (i = 0; i < n; i++)
    {
        if (a[i]==key)
        {
            flag=1;
            break;
        }
        
    }
    if (flag==1)
    {
        printf("%d is present in the array at location %d\n",key,i+1);
    }
    else
    {
        printf("%d is not present in the array\n",key);
    }
    return 0;
    
    
    
}