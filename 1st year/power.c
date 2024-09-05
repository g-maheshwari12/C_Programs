#include<stdio.h>
void calculate_power(int,int);
 
void main() 
{
    int a,b;
    printf("Enter the base: ");
    scanf("%d",&a);
    printf("Enter the exponent: ");
    scanf("%d",&b);
    calculate_power(a,b);
}
 
void calculate_power(int a,int b)
{
    int power=1;
    while(b>0)
    {
        power=power*a;
        b--;
    }
    printf("The power of the no = %d",power);
}