#include<stdio.h>
void main()
{
    char str[50];
    int i;
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            str[i]=str[i]-32;
        }
    }
    puts(str);
}