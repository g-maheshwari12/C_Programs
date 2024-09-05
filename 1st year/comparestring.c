#include<stdio.h>
void main()
{
    char a[50],b[50];
    int i=0,j=0,flag=0;
    printf("Enter first string: ");
    gets(a);
    printf("Enter second string: ");
    gets(b);
    while(a[i]!='\0'&&b[i]!='\0')
    {
        if(a[i]!=b[i])
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
    {
        printf("Both string are equal");
    }
    else{
        printf("Both string are not equal");
    }
}