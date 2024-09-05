#include<stdio.h>
union{
int x;
char y;
}u;
int main()
{
    u.y=89;
    printf("%d",sizeof(u));
}
