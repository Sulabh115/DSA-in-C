#include<stdio.h>
int binary_search(int a[],int l,int r,int key)
{
    int mid;
    int flag;
    if (l<r)
    {
        mid=(l+r)/2;
        if (key==a[mid])
        {
            flag=mid;   
        }
        else if (key<a[mid])
        {
            return binary_search(a,l,mid-1,key);
        }
        else{
            return binary_search(a,mid+1,r,key);
        }
        
        

    }
    return flag;
    
}
int main()
{
    int a[100],n,key,flag;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements in sorted form:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    flag=binary_search(a,0,n-1,key);
    if (flag==0)
    {
        printf("Search Un-successful\n");
    }
    else{
        printf("Search successful and found at index %d and location %d\n",flag,flag+1);
    }
    
    
}