#include<stdio.h>
int largest(int a[],int n){
    int larger=a[0],i;
    for (int i = 0; i < n; i++)
    {
        if (a[i]>larger)
        {
            larger=a[i];
        }
        
    }
    return larger;
    
}
void radix_sort(int a[],int n)
{
    int bucket[10][10],bucket_count[10]={0};
    int i,j,k, remainder, NOP=0, divisor=1, larger, pass;
    larger=largest(a,n);
    while (larger>0)
    {
        NOP++;
        larger/=10;
    }
    for (int pass = 0; pass < NOP; pass++)
    {
        for (int i = 0; i < n; i++)
        {
            bucket_count[i]=0;
        }
        for (int i = 0; i < n; i++)
        {
            remainder=(a[i]/divisor)%10;
            bucket[remainder][bucket_count[remainder]]=a[i];
            bucket_count[remainder]+=1;
        }
        i=0;
        for (int k = 0; k < 10; k++)
        {
            for (int j = 0; j < bucket_count[k]; j++)
            {
                a[i]=bucket[k][j];
                i++;
            }
            
        }
        divisor*=10;
        
        
        
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
    printf("Before Sorting\n");
    display(a,n);
    printf("Using Radix Sort\n");
    radix_sort(a,n);
    printf("After Sorting...\n");
    display(a,n);
    return 0;

    
}