#include<stdio.h>
struct student
{
    char name[50];
    int rollno;
    int per;
};
void main()
{
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the name of student:");
        scanf("%s",&s[i].name);
        printf("Enter roll no of student: ");
        scanf("%d",&s[i].rollno);
        printf("Enter the perentage of student: ");
        scanf("%d",&s[i].per);
    }
    int a;
    int max=s[0].per;
    for(i=1;i<n;i++)
    {
        if (max<s[i].per)
        {
            max=s[i].per;
            a=i;
        }
    }

    printf("The details of student having highest percentage is given below: ");
    printf("%s\n",s[a].name);
    printf("%d\n",s[a].rollno);
    printf("%d",s[a].per);
}
