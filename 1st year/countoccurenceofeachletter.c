#include<stdio.h>
void main()
{
    char str[50];
    int i,j,count;
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        count=1;
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        printf("%c occurs %d times\n",str[i],count);
    }
}