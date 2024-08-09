#include <stdio.h>

int main()
{
    int a[3][3], i, j,p,s, sum = 0;
    printf("Enter the array's row & column size: ");
    scanf("%d", &i);
    printf("Enter array's elements:\n");
    for (p = 0; p < i; p++)
    {
        for (s = 0; s < i; s++)
        {
            scanf("%d", &a[p][s]);
        }
    }
    
    for (p = 0; p < i; p++)
    {
        for (s= 0; s < i; s++)
        {
            if (p== s)
            {
                sum += a[p][s];
            }
        }
    }
    printf("The sum of diagonal elements of an Array: %d", sum);
    
}
