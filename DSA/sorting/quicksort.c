//program to implement quick sort
#include<stdio.h>
int partition(int a[],int l, int r)
{
    int low=l;
    int high=r;
    int pivot=a[l],temp;
    while (low<high)
    {
        while (a[low]<=pivot)
        {
            low++;
        }
        while (a[high]>pivot)
        {
            high--;
        }
        if (low<high)
        {
            temp=a[low];
            a[low]=a[high];
            a[high]=temp;
        }
        
    }
    a[l]=a[high];
    a[high]=pivot;
    return high;
    
}
void quicksort(int a[],int l, int r)
{
    int p;
    if (l<r)
    {
        p=partition(a,l,r);
        quicksort(a,l,p-1);
        quicksort(a,p+1,r);
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
    int a[100],n,l,r;
    printf("******Quick Sort******\nEnter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements in array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nBefore sorting.....\n");
    display(a,n);
    printf("\n.....Using Quick Sort....\n ");
    l=0;
    r=n-1;
    quicksort(a,l,r);
    printf("\nAfter sorting......\n");
    display(a,n);
    return 0;
    

}