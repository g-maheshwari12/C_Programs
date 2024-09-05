#include<stdio.h>
#define max 5
int push(int [],int);
int pop(int[],int);
void display(int[],int);
void peek(int[],int);
int main()
{
    int a[max],top=-1,ch;
    char choice;
    do
    {
        printf("\nEnter 1-push\n2-pop\n3-display\n4-peek\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: top=push(a,top);
                    break;
            case 2: top=pop(a,top);
                    break;
            case 3: display(a,top);
                    break;
            case 4: peek(a,top);
                    break;
        }
        printf("press y to continue and n to stop");
        char c= getchar();
        scanf("%c",&choice);
    }while(choice=='y');
    
    return 0;   
}

int push(int a[],int top)
{
    if (top==(max-1))
    {
       printf("Stack is full");
    }
    else
    {
        top++;
        printf("Enter the element to be pushed: ");
        scanf("%d",&a[top]);
        return top;
    }
}
int pop(int a[],int top)
{
    if (top==-1)
    {
        printf("Stack is empty");
    }
    else 
    {
        printf("Deleted elememt is %d",a[top]);
        top--;
        return top;
    }
}
void display(int a[],int top)
{
    if (top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        while(top>=0)
        {
            printf("%d",a[top]);
            top--;
        }
    }
}
void peek(int a[],int top)
{
    if (top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Topmost element is %d",a[top]);
    }
}