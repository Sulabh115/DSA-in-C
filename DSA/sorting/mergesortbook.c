#include<stdio.h>
void merge(int a[],int l,int m,int r)
{
    int x=l;
    int k=l,i;
    int b[100];
    int y=m;
    while (x<m && y<=r)
    {
        if (a[x]<=a[y])
        {
            b[k]=a[x];
            k++;
            x++;
        }
        else{
            b[k]=a[y];
            k++;
            y++;
        }
        
    }
    while (x<m)
    {
        b[k]=a[x];
        k++;
        x++;
    }
    while (y<=r)
    {
        b[k]=a[y];
        y++;
        k++;
    }
    for (int i = l; i <=r; i++)
    {
        a[i]=b[i];  
    }
    
    
    
    
}
void merge_sort(int a[],int l,int r)
{
    int mid;
    if (l<r)
    {
        mid=(l+r)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        merge(a,l,mid+1,r);
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
    int a[100],n,i,l,r;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nBefore sorting...\n");
    display(a,n);
    printf("\nUsing Merge Sort\n");
    l=0;
    r=n-1;
    merge_sort(a,l,r);
    printf("\nAfter sorting...\n");
    display(a,n);
    return 0;
    
}