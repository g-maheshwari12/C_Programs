#include <stdio.h>
#include <stdlib.h>
int main()
{
    int strong(int);
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum=strong(n);
    if(n==sum)
    {
        printf("%d is a Strong Number",n);
    }
    else
    {
        printf("%d is not a Strong Number",n);
    }
    return 0;
}
int strong(int n)
{
    int i,sum=0,fact,num,rem;
    for(num=n;num>0;num/=10)
    {
        rem=num%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
    }
    return sum;
}