#include <stdio.h>
int main()
{
    int a[5][5], i, j, sum = 0;
    printf("Enter array's elements:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Boundary elements of an Array:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == 0 || i == 2 || j == 0 || j == 2)
            {
                printf("%d  ", a[i][j]);
                sum += a[i][j];
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    
    printf("The sum of boundary elements of an Array: a[%d]", sum);
    
}
