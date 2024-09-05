#include<stdio.h>
int reverse(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The reverse number of %d is %d",n,reverse(n));
    return 0;
}
int sum=0,rem;
int reverse(int n)
{
    
    if(n)
    {
        rem=n%10;
        sum=sum*10+rem;
        reverse(n/10);
    }
    else
    {
        return sum;
    }
    return sum;
}