#include<stdio.h>
int sum_of_digits(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The sum of digits of %d is %d",n,sum_of_digits(n));
    return 0;
}
int sum_of_digits(int n)
{
    if (n!=0)
    {
        return n%10 + sum_of_digits(n/10);
    }
    else
    {
        return n;
    }
}