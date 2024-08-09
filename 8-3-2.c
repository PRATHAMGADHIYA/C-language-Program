#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3], i, j,p,s;
    
    printf("Enter the array's row size: ");
    scanf("%d", &i);
    
    printf("Enter the array's column size: ");
    scanf("%d", &j);
    
    printf("Enter array A's elements:\n");
    
    for (p= 0; p < i; p++)
    {
        for (s = 0; s < j; s++)
        {
            scanf("%d", &a[p][s]);
        }
    }
    printf("Enter array B's elements:\n");
    for (p= 0; p< i; p++)
    {
        for (s= 0; s < j; s++)
        {
            scanf("%d", &b[p][s]);
        }
    }
    
    for (p = 0; p < i; p++)
    {
        for (s = 0; s < j; s++)
        {
            c[p][s] = a[p][s] + b[p][s];
        }
    }
    
    printf("Array C is:\n");
    for (p = 0; p < i; p++)
    {
        for (s = 0;s < j; s++)
        {
            printf("%d  ", c[p][s]);
        }
        printf("\n");
    }
    
}
