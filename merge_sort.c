#include<stdio.h>
#include<string.h>
#define max 100
void m_sort(int a[],int t[],int lb,int ub);
void merge(int a[],int t[],int lb,int mid,int ub);
int main()
{
    int n,i,a[max],t[max];
    printf("Enter no of elements: ");
    scanf("%d",&n);
    printf("Enter the elements in an array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m_sort(a,t,0,n-1);
    printf("After merge sort operation array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void m_sort(int a[],int t[],int lb,int ub)
{
    int mid=0;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        m_sort(a,t,lb,mid);
        m_sort(a,t,mid+1,ub);
        merge(a,t,lb,mid+1,ub);    
    }
}
void merge(int a[],int t[],int lb,int mid,int ub)
{
    int le=mid-1,i,k=lb;
    while(lb<=le&&mid<=ub)
    {
        if(a[lb]<a[mid])
        {
            t[k]=a[lb];
            k++;
            lb++;
        }
        else
        {
            t[k]=a[mid];
            k++;
            mid++;
        }
    }
    while(lb<=le)
    {
        t[k]=a[lb];
        k++;
        lb++;
    }
    while(mid<=ub)
    {
        t[k]=a[mid];
        k++;
        mid++;
    }
    for(i=lb;i<ub;i++)
    {
        a[i]=t[i];
    }
}