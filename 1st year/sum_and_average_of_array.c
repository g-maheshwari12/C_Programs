#include<stdio.h>
int main()
{
    int i, num;
    float total = 0.0, avg;
    printf ("Enter the value of N: ");
    scanf("%d", &num);
    int array[num];
    printf("Enter %d numbers: ", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array elements \n");
    for (i = 0; i < num; i++)
    {
        printf("%+3d\n", array[i]);
    }
    for (i = 0; i < num; i++)
    {
        total+=array[i];
    }
    avg = total / num;
    printf("\n Sum of all numbers =  %.2f\n", total);
    printf("\n Average of all input numbers =  %.2f\n", avg);
}
