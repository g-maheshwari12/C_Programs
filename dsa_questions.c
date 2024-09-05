#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
node* create(node *);
void display(node *);
node* insertatbeg(node *);
void insertatend(node *);
node *insertatanypos(node *);
node *deleteatbeg(node *);
void deleteatend(node *);
void countnode(node *l);
void searchandreplace(node *);
void printalt(node *l);
void printeven(node *l);
void printinreverse(node *l);
int main()
{
    node *l=NULL,*r=NULL;
    int x;
    char ch;
    do
    {
        printf("enter 1 to create\nenter 2 display\nenter 3 to insert at beginning\nenter 4 to insert at end\nenter 5 to insert at any position\nenter 6 to delete at beginning\nenter 7 to delete at end\nenter 8 to delete at any position\nenter 9 to count number of nodes\nenter 10 to search and replace data\nenter 11 to print alternate data\nenter 12 to print even data\nenter 13 to print data in reverse\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:r=create(r);
                    if(l==NULL)
                      {
                        l=r;
                      }
                    break;
            case 2:display(l);
                    break;
            case 3:l=insertatbeg(l);
                    break;
            case 4:insertatend(l);
                    break;
            case 5:l=insertatanypos(l);
                    break;
            case 6:l=deleteatbeg(l);
                    break;
            case 7:deleteatend(l);
                    break;
            case 9:countnode(l);
                    break;
            case 10:searchandreplace(l);
                    break;
            case 11:printalt(l);
                    break;
            case 12:printeven(l);
                    break;
            case 13:printinreverse(l);

        }
        printf("enter y for yes\nenter n for no\n");
        char c=getchar();
        scanf("%c",&ch);
    }while(ch=='y');
}
node* create(node *r)
{
    node *p=NULL;
    p=(node *)malloc(sizeof(node));
    printf("enter the data\n");
    scanf("%d",&p->data);
    if(r==NULL)
    {
        r=p;
    }
    else
    {
        r->next=p;
        r=p;
    }
    r->next=NULL;
    return r;
}
void display(node *l)
{
    while(l!=NULL)
    {
        printf("value of nodes are %d\n",l->data);
        l=l->next;
    }
}
node *insertatbeg(node *l)
{
    node *p=NULL;
    p=(node *)malloc(sizeof(node));
    printf("enter the new node value\n");
    scanf("%d",&p->data);
    p->next=l;
    return p;
}
void insertatend(node *l)
{
    node *p=NULL;
    p=(node *)malloc(sizeof(node));
    printf("enter the value at new node\n");
    scanf("%d",&p->data);
    while(l->next!=NULL)
    {
        l=l->next;
    }
    l->next=p;
    p->next=NULL;
}
node *insertatanypos(node *l)
{
    int pos,c=0;
    node *p=NULL,*q=NULL,*s=NULL;
    s=q=l;
    while(q!=NULL)
    {
        c++;
        q=q->next;
    }
    printf("number of nodes are %d\n",c);
    printf("enter the position\n");
    scanf("%d",&pos);
    if(pos==1)
    {
        l=insertatbeg(l);
        return l;
    }
    else if(pos-c==1)
    {
        insertatend(l);
        return l;
    }
    else
    {
        p=(node *)malloc(sizeof(node));
        printf("enter the value at new node\n");
        scanf("%d",&p->data);
        for(int i=1;i<pos-1;i++)
        {
            l=l->next;
        }
        p->next=l->next;
        l->next=p;
        return s;
    }
}
node *deleteatbeg(node *l)
{
    node *p=l;
    l=l->next;
    free(p);
    return l;
}
void deleteatend(node *l)
{
    node *p=l;
    while(l->next->next!=NULL)
    {
        l=l->next;
    }
    p=l->next;
    l->next=NULL;
    free(p);
}
void countnode(node *l)
{
    int c;
    while(l!=NULL)
    {
        c++;
        l=l->next;
    }
    printf("number of nodes are %d\n",c);
}
void searchandreplace(node *l)
{
    int val;
    printf("enter the value to be searched\n");
    scanf("%d",&val);
    while(l!=NULL)
    {
        if(val==l->data)
        {
            l->data=0;
        }
        l=l->next;
    }
}
void printalt(node *l)
{
    int c=1;
    while(l!=NULL)
    {
        if(c%2==1)
            printf("%d\n",l->data);
        l=l->next;
        c++;
    }
}
void printeven(node *l)
{
    while(l!=NULL)
    {
        if(l->data%2==0)
            printf("%d\n",l->data);
        l=l->next;
    }
}
void printinreverse(node *l)
{
    node *p=l,*q=NULL;
    int temp;
    while(p!=NULL)
    {
       q=p->next;
       while(q!=NULL)
       {
           temp=p->data;
           p->data=q->data;
           q->data=temp;
           q=q->next;
       }
       p=p->next;
    }
}
