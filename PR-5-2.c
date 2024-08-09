#include <stdio.h>

int main()
{
    int row, column, i, j, max;

    printf("Enter the  row size: ");
    scanf("%d", &row);

    printf("Enter the  column size: ");
    scanf("%d", & column);

    int a[row][column];

    printf("Enter array's elements:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    max = a[0][0];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }

    printf("The largest element is: %d", max);

  
}

