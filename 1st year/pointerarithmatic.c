#include<stdio.h>
void main()
{
    int a,b,*c,*d;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=&a;
    d=&b;
    //printf("%d",c+d);//
    printf("%d\n",c-d);
    printf("%d\n",*c+*d);
    printf("%d\n",*c-*d);
    //printf("%d",c*d);//
    //printf("%d",c/d);//
    printf("%d\n",*c**d);
    printf("%d\n",(*d)/(*c));
}