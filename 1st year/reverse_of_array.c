#include<stdio.h>
int main()
{
    int num,i;
    int array[num];
    printf ("Enter the value of N: ");
    scanf("%d", &num);
    printf("Enter %d numbers: ", num);
    for(i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Reverse of Array elements are: ");
    for(i = num-1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
