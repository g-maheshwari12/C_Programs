#include <stdio.h>
void main ()
{
    int mat[10][10];
    int i, j, row, col, sum = 0;

    printf("enter the order of the matrix: ");
    scanf("%d %d", &row, &col);

    printf("enter the elements of the matrix: ");
    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < col; ++j)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("The matrix is: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t%d  ",mat[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < col; ++j)
        {
            sum = sum + mat[i][j] ;
        }
        printf("Sum of the %d row is = %d\n", i+1, sum);
        sum = 0;
    }
    sum = 0;
    for (j = 0; j < col; ++j)
    {
        for (i = 0; i < row; ++i)
        {
            sum = sum + mat[i][j];
        }
        printf("sum of the %d column is = %d\n", j+1, sum);
        sum = 0;
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                sum=sum+mat[i][j];
            }
        }
    }
    printf("The sum of diagonal elements of a square matrix = %d",sum);
}
