//program to implement merge sort
#include<stdio.h>
void merge(int a[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int left[n1],right[n2];
    int k=l;

    for (int i = 0; i < n1; i++)
    {
        left[i]=a[l+i];
    }
    for (int j = 0; j < n2; j++)
    {
        right[j]=a[m+1+j];
    }
    int i=0,j=0;
    while (i<n1 && j<n2)
    {
        if (left[i]<=right[j])
        {
            a[k]=left[i];
            i++;
            k++;
        }
        else{
            a[k]=right[j];
            k++;
            j++;
        }
        
    }
    while (i<n1)
    {
        a[k]=left[i];
        i++;
        k++;
    }
    while (j<n2)
    {
        a[k]=right[j];
        j++;
        k++;
    }
    
    
    

}
void merge_sort(int a[],int l,int r)
{
    if (l<r)
    {
        int mid=(l+r)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        merge(a,l,mid,r);
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
    int a[100],n;
    printf("******Merge Sort******\nEnter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nBefore Sorting...\n");
    display(a,n);
    printf("\nUsing Merge Sort....\n");
    merge_sort(a,0,n-1);
    printf("\nAfter Sorting....\n");
    display(a,n);
    return 0;
    
}