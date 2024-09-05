#include<stdio.h>
#define max 10
int push(int[],int);
int pop(int[],int);
void display(int[],int);
void peek(int[],int);
int main()
{
    int stack[max],top=-1,ch,temp;

    do{
       printf("1 - Push\n,2 - Pop\n,3 - Display\n,4 - Peek\n");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1: if (top==max-1)
                    {
                    printf("Stack is full");
                    }
                    else
                    {
                    top=push(stack,top);
                    }
                    break;
           case 2: if(top==0)
                   {
                   printf("Stack is empty");
                   }
                   else
                   {
                   top=pop(stack,top);
                   }
                   break;
           case 3: if(top==0)
                   {
                   printf("Stack is empty");
                   }
                   else
                   {
                   display(stack,top);
                   }
                   break;
           case 4: if(top=-1)
                   {
                   printf("Stack is empty");
                   }
                   else
                   {
                   peek(stack,top);
                   }break;
        }printf("Enetr 0 if you do not want to continue otherwise enter any other number");
         scanf("%d",&temp);
    }
      while(temp);
       }
    int push(int s[],int top)
    {
        int x;
        top++;
        printf("Enter the Element: ");
        scanf("%d",&x);
        s[top]=x;
        return top;
    }
int pop(int s[],int top)
{
printf("The popped element is %d",s[top]);
top--;
}
void display(int s[],int top)
{
    for(int i=0;i<=top;i++)
    {
      printf("%d",s[i]);
    }
}
void peek(int s[],int top)
{
    printf("%d",top);
}
