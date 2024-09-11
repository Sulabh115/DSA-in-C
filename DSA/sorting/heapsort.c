//program to sort an arry using heap sort
#include<stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void heapify(int a[],int n,int i)
{
    int left=2*i+1;
    int right=2*i+2;
    int largest=i;
    if (left<n && a[left]>a[largest])
    {
        largest=left;
    }
    if (right<n && a[right]>a[largest])
    {
        largest=right;
    }
    if (largest!=i)
    {
        swap(&a[largest],&a[i]);
        heapify(a,n,largest);
    }
    
    
    
    

}
void heapsort(int a[],int n)
{
    int strindex=(n/2)-1;
    for (int i = strindex; i >=0; i--)
    {
        heapify(a,n,i);
    }
    for (int j = n-1; j >0; j--)
    {
        swap(&a[0],&a[j]);
        heapify(a,j,0);
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
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Before using Heap sort....\n");
    display(a,n);
    printf("Using Heap Sort\n");
    heapsort(a,n);
    printf("After Sorting...\n");
    display(a,n);
    return 0;
    


}