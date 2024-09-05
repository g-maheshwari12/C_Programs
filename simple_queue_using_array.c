#include<stdio.h>
#define max 5
int enqueue(int [],int);
int dequeue(int [],int,int);
void display(int [],int,int);
int main()
{
    int x,a[max],f=-1,r=-1;
    char ch;
    do{
        printf("\n 1-enqueue \n 2-dequeue \n 3-display \n");
        scanf("%d",&x);
        switch(x)
        {
            case 1: r=enqueue(a,r);
                    if (f==-1)
                    {
                        f=0;
                    }
                    break;
            case 2: f=dequeue(a,f,r);
                    if (f==-1)
                    {
                        r=-1;
                    }
            case 3: display(a,r,f);
                    break;
        }
        printf("\n Enter y to continue and n to stop\n");
        char c=getchar();
        scanf("%c",&ch);
    }while(ch=='y');
    return 0;
}
int enqueue(int a[],int r)
{
    if (r==max-1)
    {
        printf("queue is full");
    }
    else
    {
        int n;
        printf("Enter the element:");
        scanf("%d",&n);
        r++;
        a[r]=n;
        return r;
    }
}
int dequeue(int a[],int f,int r)
{
    if (f==-1)
    {
        printf("queue is empty");
    }
    else
    {
        if (f==r)
        {
            f-=1;
        }
        else
        {
            printf("Deleted element is %d",a[f]);
            f++;
        }
        return f;
    }
}
void display(int a[],int r,int f)
{
    for(int i=f;i<=r;i++)
    {
        printf("%d",a[i]);
    }
}