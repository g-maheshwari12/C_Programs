#include<stdio.h>
void main()
{
    char str[50];
    int i,c=1;
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' '&&str[i+1]!=' ')
        {
            c++;
        }
    }
    printf("Number of words is %d",c);
}