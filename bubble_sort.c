#include<stdio.h>
#define max 100
void bubble(int[],int);
void insertion(int[],int);
void selection(int[],int);
int main()
{
    int a[max],n,i;
    printf("ENter the no of elements:");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    insertion(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    selection(a,n);
    printf("Sorted elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void bubble(int a[],int n)
{
    int i,j,t=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
void insertion(int a[],int n)
{
    int i,j,t=0;
    for(i=1;i<n;i++)
    {
        j=i-1;
        t=a[i];
        while(j>=0&&t<a[j])
        {
            a[j]=a[j+1];
            j--;
        }
        a[j+1]=t;
    }
}
void selection(int a[],int n)
{
    int i,j,min=0,pos=0;
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                pos=j;
            }
        }
        if(i!=pos)
        {
            a[pos]=a[i];
            a[i]=min;
        }
    }
}