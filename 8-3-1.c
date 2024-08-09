#include <stdio.h>

int main()
{
    int r, c, i, j;
    float avg, sum=0;
    printf("Enter the array's row size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c);
    int a[r][c];
    printf("Enter array's elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum = sum + a[i][j];
        }
    }
    avg = sum / (r * c);
    printf("Average of an Array: %.2f\n", avg);
    
}
