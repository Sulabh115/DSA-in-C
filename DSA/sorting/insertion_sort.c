//program to sort an array using insertion sort
#include<stdio.h>
void insertion_sort(int a[],int n)
{
    int temp,j;
    for (int i = 1; i < n; i++)
    {
        temp=a[i];
        j=i-1;
        while (j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    
    
}
void display(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
int main()
{
    int n,a[100];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\bBefore sorting\n");
    display(a,n);
    printf("Sorting using insertion sort\n");
    insertion_sort(a,n);
    display(a,n);
    return 0;
    
    
}