#include<stdio.h>

main()
{
	int i,j,k;
	
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		
		for(k=1;k<=5-i;k++)
		{
			printf("  ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	  }
    }

