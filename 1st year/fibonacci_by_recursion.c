#include<stdio.h>
int fibonacci(int);
int main()
{
    int n,i;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("The fibonacci series upto %d is ....\n",n);
    for(i=0;i<n;i++)
    {
        printf("%d ",fibonacci(i));
    }
    return 0;
}
int fibonacci(int i)
{
    if(i==0)
    {
        return 0;sum_of_natural_numbers_by_recursion.c
    }
    else if(i==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(i-1)+fibonacci(i-2);
    }
}