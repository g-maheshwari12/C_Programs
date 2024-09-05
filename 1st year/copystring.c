#include<stdio.h>
void main()
{
    char a[50],b[50];
    int i=0;
    printf("Enter a string: ");
    gets(a);
    while(a[i]!='\0')
    {
        b[i]=a[i];
        i++;
    }
    puts(a);
    puts(b);
}