#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    struct node *left;
    int data;
    struct node *right;
}tree;
tree *create(int);
void insert(tree **,tree *);
void inorder(tree *);
void preorder(tree *);
void postorder(tree *);
void total_nodes(tree *,int *);
void leaf_nodes(tree *,int *);
void non_leaf_nodes(tree *,int *);
void one_child_node(tree *,int *);
void left_child_node(tree *,int *);
void right_child_nodes(tree *,int *);
int search(tree *,int);
int height(tree*);
int minimum_element(tree *);
int maximum_element(tree *);
tree* del(tree*,int);
int main()
{
    tree *temp=NULL,*root=NULL;
    int num,key,c1=0,a=0,b=0,c=0,d=0,e=0,f=0,minimum,maximum,l,no;
    char ch='y';
    do
    {
        printf("Enter the data:");
        scanf("%d",&num);
        temp=create(num);
        insert(&root,temp);
        printf("Enter y to continue:");
        char c=getchar();
        scanf("%c",&ch);
    }while(ch=='y');
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    total_nodes(root,&a);
    printf("Total nodes:%d\n",a);
    leaf_nodes(root,&b);
    printf("Leaf nodes:%d\n",b);
    non_leaf_nodes(root,&c);
    printf("Non Leaf Nodes:%d\n",c);
    one_child_node(root,&d);
    printf("One Child Node:%d\n",d);
    left_child_node(root,&e);
    printf("Left Child Node:%d\n",e);
    right_child_nodes(root,&f);
    printf("Right Child Node:%d\n",f);
    printf("Enter a key:");
    scanf("%d",&key);
    c1=search(root,key);
    if(c1==1)
    {
        printf("Key is found\n");
    }
    else
    {
        printf("Key is not found\n");
    }
    minimum=minimum_element(root);
    printf("Minimum Element:%d\n",minimum);
    maximum=maximum_element(root);
    printf("Maximum Element:%d\n",maximum);
    l=height(root);
    printf("Height of Tree is %d\n",l);
    printf("Enter the value of node you want to delete:");
    scanf("%d",&no);
    del(root,no);
    printf("\n");
    inorder(root);
    printf("\n");
    return 0;
}
tree *create(int x)
{
    tree *temp=NULL;
    temp=(tree*)malloc(sizeof(tree));
    if(temp!=NULL)
    {
        temp->data=x;
        temp->left=NULL;
        temp->right=NULL;
    }
    else
    {
        printf("Not Enough Memory");
    }
    return temp;
}
void insert(tree **root,tree *temp)
{
    if(*root==NULL)
    {
        (*root)=temp;
    }
    else
    {
        if(temp->data<(*root)->data)
        {
            insert(&((*root)->left),temp);
        }
        else
        {
            insert(&((*root)->right),temp);
        }
    }
}
void inorder(tree *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
void preorder(tree *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(tree *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
void total_nodes(tree *root,int *a)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        (*a)++;
        total_nodes(root->left,a);
        total_nodes(root->right,a);
    }
}
void leaf_nodes(tree *root,int *b)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        if(root!=NULL&&root->left==NULL&&root->right==NULL)
        {
            (*b)++;
        }
        leaf_nodes(root->left,b);
        leaf_nodes(root->right,b);
    }
}
void non_leaf_nodes(tree *root,int *c)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        if(root!=NULL&&root->left!=NULL&&root->right!=NULL)
        {
            (*c)++;
        }
        non_leaf_nodes(root->left,c);
        non_leaf_nodes(root->right,c);
    }
}
void one_child_node(tree *root,int *d)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        if(root!=NULL)
        {
            if((root->left==NULL&&root->right!=NULL)||(root->left!=NULL&&root->right==NULL))
            {
                (*d)++;
            }
            one_child_node(root->left,d);
            one_child_node(root->right,d);
        }
    }
}
void left_child_node(tree *root,int *e)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        if(root!=NULL&&root->left!=NULL&&root->right==NULL)
        {
            (*e)++;
        }
        left_child_node(root->left,e);
        left_child_node(root->right,e);
    }
}
void right_child_nodes(tree *root,int *f)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        if(root!=NULL&&root->left==NULL&&root->right!=NULL)
        {
            (*f)++;
        }
        right_child_nodes(root->left,f);
        right_child_nodes(root->right,f);
    }
}
int search(tree *root,int key)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->data==key)
    {
        return 1;
    }
    else if(root->data>key)
    {
        search(root->left,key);
    }
    else
    {
        search(root->right,key);
    }
}
int minimum_element(tree *root)
{
    while(root->left)
    {
        root=root->left;
    }
    return root->data;
}
int maximum_element(tree *root)
{
    while(root->right)
    {
        root=root->right;
    }
    return root->data;
}
int height(tree* root)
{
    int l=0,r=0;
    if(root!=NULL)
    {
        l=height(root->left);
        r=height(root->right);
        if(l>r)
            return (l+1);
        else
            return (r+1);
    }
    else
    {
        return 0;
    }
}
tree* del(tree* root,int no) 
{
    tree* temp=root->right;
    if(root==NULL)
    {
        return root;
    }
    else
    {
        if(no<root->data)
        {
            root->left= del(root->left,no);
        }
        else if(no>root->data)
        {
            root->right=del(root->right,no);
        }
        else
        {
            if(root->left==NULL&&root->right==NULL)
            {
                free(root);
                return NULL;
            }
            else 
            {
                while(temp->left!=NULL)
                {
                    temp=temp->left;
                }
                root->data=temp->data;
                root->right=del(root->right,root->data);
            }
        }
    }
    return root; 
}