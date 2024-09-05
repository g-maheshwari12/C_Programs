#include <stdio.h>
int main()
{
    int A[10][10],i,j,m,n;
    int row, col, isUpper;

    printf("Enter no. of rows :: ");
    scanf("%d", &m);
    printf("\nEnter no. of cols :: ");
    scanf("%d",&n);

    printf("\nEnter values to the matrix :: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nEnter a[%d][%d] value :: ",i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nThe given matrix is :: \n\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("\t%d", A[i][j]);
        }
        printf("\n\n");
    }
    isUpper = 1;
    for(row=0; row<m; row++)
    {
        for(col=0; col<n; col++)
        {
            if(col<row && A[row][col]!=0)
            {
                isUpper = 0;
            }
        }
    }
    if(isUpper==1)
    {
        printf("\nThis is a Upper triangular matrix.\n");
    }
    else
    {
        printf("\nThis is Not a Upper triangular matrix.");
    }

    return 0;
}
