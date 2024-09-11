//program for bubble sort
#include<stdio.h>
void bubble_sort(int a[],int n)
{
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
            
        }
        
    }
    
}
int main()
{
    int n;
    int a[100];
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements of array before sorting are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("Sorting elements of array\n");
    bubble_sort(a,n);
    printf("The elements of array after sorting are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
    
    
}