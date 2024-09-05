#include<stdio.h>
int sum(int);
int main()
{
    int n,i;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("The sum of %d natural numbers is ...\n",n);
    printf("%d",sum(n));
    return 0;
}
int sum(int n)
{
    if(n!=0)
    {
        return n + sum(n-1);
    }
    else
    {
        return n;
    }
}