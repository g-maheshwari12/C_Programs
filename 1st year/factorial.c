#include <stdio.h>
int fact(int n);
int main()
{
    int n,factorial;
    printf("Enter a number: ");
    scanf("%d",&n);
    factorial = fact(n);
    printf("Factorial of %d is %d",n,factorial);
    return 0;
}
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}