#include<stdio.h>

main()
{
	int i,j,n=11;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++,n++)
		{
			printf("%d",n,j);
		}
		printf("\n");
	}
}
