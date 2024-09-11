//program to sort using shell sort
#include<stdio.h>
void shell_sort(int a[],int n)
{
    int gap,temp,i,j;
    for (int gap = n/2; gap > 0; gap=gap/2)
    {
        for ( i = gap; i < n; i++)
        {
            temp = a[i];
            for ( j = i; j >= gap && a[j-gap]>=temp; j=j-gap)
            {
                a[j]=a[j-gap];
                
            }
            a[j]=temp;
        }
        
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
    printf("******Shell Sort******\nEnter the number of elements:");
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