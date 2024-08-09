#include <stdio.h>
int main()
{
    int row, column,i,j;
    printf("Enter the array's row & column size: ");
    scanf("%d", &row);
    int a[row][row];
    printf("Enter array's elements:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf(" transpose matrix :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
  
}
