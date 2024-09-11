#include<stdio.h>
void shell_sort(int a[],int n)
{
    int gap,temp;
    gap=n/2;
    while (gap>0)
    {
        
        for (int i = gap; i < n; i++)
        {
            temp=a[i];
            int j=i;
            while (j>=gap && a[j-gap]>=temp)
            {
                a[j]=a[j-gap];
                j=j-gap;
            }
            a[j]=temp;
            
        }
        gap=gap/2;
        
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
    printf("Before Sorting....\n");
    display(a,n);
    shell_sort(a,n);
    printf("After Sorting....\n");
    display(a,n);
    return 0;


}