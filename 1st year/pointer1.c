#include<stdio.h>
void main()
{
    int a=10,b=9,c;
    int *p,*q;
    p=&a;
    q=&b;
    c=*p;
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%d\n",p);
    printf("%d\n",&a);
    printf("%d",&p);
}