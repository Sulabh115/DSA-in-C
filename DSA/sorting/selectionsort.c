//program to sort an array using selection sort
#include<stdio.h>
void selection_sort(int a[],int n)
{
    int minindex,temp;
    for (int i = 0; i < n; i++)
    {
        minindex=i;
        for (int j = i+1; j < n; j++)
        {
            if (a[j]<a[minindex])
            {
                minindex=j;
            }
            
        }
        temp=a[i];
        a[i]=a[minindex];
        a[minindex]=temp;
        
        
    }
    
}
int main()
{
    int a[100],n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Before sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nsorting the array\n");
    selection_sort(a,n);
    printf("After sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
    
    
    
}