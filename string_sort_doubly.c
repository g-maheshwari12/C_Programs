#include <stdio.h>

#include<string.h>

#include<stdio.h>

#define c 10

//Function Defination

void m_sort(char [][c],char [][c],int lb,int ub);

void merge(char a[][c],char t[][c],int lb,int mid,int ub);

int main()

{

   int r,i;

   printf("Enter number of words");

   scanf("%d",&r);

   char a[r][c],t[r][c];

   i=0;

   //Entering words to be sorted

   printf ("\t\t\t*****INPUT*****\n");

   for(i=0;i<r;i++)

   {  

       printf("Enter word%d",i+1);

       scanf("%s",a[i]);

   }

   m_sort(a,t,0,r-1);  //Function call

   //Printing words after sorting

   printf ("\t\t\t*****OUTPUT*****\n");

   for(i=0;i<r;i++)

   {

       printf("%s\n",a[i]);

   }

   

   

}

//Function Defination

void m_sort(char a[][c],char t[][c],int lb,int ub)

{

   int mid;

   if(lb<ub)

   {

       mid=(lb+ub)/2;

       m_sort(a,t,lb,mid);

       m_sort(a,t,mid+1,ub);

       merge(a,t,lb,mid+1,ub);//Function call

   }

}

void merge(char a[][c],char t[][c],int lb,int mid,int ub)

{

   int le=mid-1,i,k=lb;

   while(lb<=le && mid<=ub)

   {

       if((strcmp(a[lb],a[mid]))<0)

       {

           strcpy(t[k],a[lb]);

           k++;

           lb++;

           

       }

       else

       {

           strcpy(t[k],a[mid]);

           k++;

           mid++;

       }

   }

   while(lb<=le)

   {

       strcpy(t[k],a[lb]);

       k++;

       lb++;

   }

   while(mid<=ub)

   {

       strcpy(t[k],a[mid]);

       k++;

       mid++;

   }

   for(i=0;i<=ub;i++)

   {

       strcpy(a[i],t[i]);

   }

}